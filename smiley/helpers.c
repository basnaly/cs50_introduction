#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    RGBTRIPLE pixel = image[0][0];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (image[height][width] == 0)
            {
                pixel.rgbtBlue = 00001100;
                pixel.rgbtGreen = 00001011;
                pixel.rgbtRed = 01001001;
            }
        }
    }
}
