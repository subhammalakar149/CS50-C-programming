#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Take average of red, green, and blue
            int x =
                round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);

            // Update pixel values
            image[i][j].rgbtRed = x;
            image[i][j].rgbtGreen = x;
            image[i][j].rgbtBlue = x;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            // Compute sepia values
            int sepiaRed = round((image[i][j].rgbtRed * .393) + (image[i][j].rgbtGreen * .769) +
                                 (image[i][j].rgbtBlue * .189));
            int sepiaGreen = round((image[i][j].rgbtRed * .349) + (image[i][j].rgbtGreen * .686) +
                                   (image[i][j].rgbtBlue * .168));
            int sepiaBlue = round((image[i][j].rgbtRed * .272) + (image[i][j].rgbtGreen * .534) +
                                  (image[i][j].rgbtBlue * .131));

            // Update pixel with sepia values
            // image[i][j].rgbtRed = sepiaRed;
            // image[i][j].rgbtGreen = sepiaGreen;
            // image[i][j].rgbtBlue = sepiaBlue;

            // update pixel with values capped at 255
            image[i][j].rgbtRed = (sepiaRed > 255) ? 255 : sepiaRed;
            image[i][j].rgbtGreen = (sepiaGreen > 255) ? 255 : sepiaGreen;
            image[i][j].rgbtBlue = (sepiaBlue > 255) ? 255 : sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels and swap
    for (int i = 0; i < height; i++)
    {
        if (width % 2 == 0)
        {
            for (int j = 0; j < width / 2; j++)
            {
                RGBTRIPLE temp[height][width];
                temp[i][j] = image[i][j];
                image[i][j] = image[i][width - (j + 1)];
                image[i][width - (j + 1)] = temp[i][j];
            }
        }

        else if (width % 2 != 0)
        {
            for (int j = 0; j < (width - 1) / 2; j++)
            {
                RGBTRIPLE temp[height][width];
                temp[i][j] = image[i][j];
                image[i][j] = image[i][width - (j + 1)];
                image[i][width - (j + 1)] = temp[i][j];
            }
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float blue = 0;
            float red = 0;
            float green = 0;
            float counter = 0;

            for (int x = i - 1; x < i + 2; x++)
            {
                // For top and bottom edge
                if (x < 0 || x >= height)
                    continue;
                for (int y = j - 1; y < j + 2; y++)
                {
                    // For left and right edge
                    if (y < 0 || y >= width)
                        continue;

                    red += copy[x][y].rgbtRed;
                    green += copy[x][y].rgbtGreen;
                    blue += copy[x][y].rgbtBlue;
                    counter += 1;
                }
            }
            image[i][j].rgbtRed = round(red / counter);
            image[i][j].rgbtGreen = round(green / counter);
            image[i][j].rgbtBlue = round(blue / counter);
        }
    }
    return;
}
