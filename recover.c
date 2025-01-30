#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }
    else
    {
        // Open card.raw
        char *in_file_name = argv[1];
        FILE *in_file_pointer = fopen(in_file_name, "r");

        if (in_file_pointer == NULL)
        {
            printf("Error: cannot open %s\n", in_file_name);
            return 2;
        }

        // Initialise variables
        BYTE buffer[512];
        int count = 0;
        FILE *out_file_pointer = NULL;
        char out_file_name[8];

        // While there's still data left to read from the memory card
        while (fread(&buffer, 512, 1, in_file_pointer) == 1)
        {
            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
                (buffer[3] & 0xf0) ==
                    0xe0) // if first byte to third byte (L to R) of the file is jpeg
            {
                // If not first JPEG, close previous
                if (!(count == 0))
                {
                    fclose(out_file_pointer);
                }
                // Initialise file
                sprintf(out_file_name, "%03i.jpg", count);
                out_file_pointer = fopen(out_file_name, "w");
                count++;
            }
            // If JPEG has been found, write to file
            if (!(count == 0))
            {
                fwrite(&buffer, 512, 1, in_file_pointer);
            }
        }
        fclose(in_file_pointer);
        fclose(out_file_pointer);
        return 0;
    }
}
