#include "helpers.h"
#include <math.h>

RGBTRIPLE blursquare(int i, int j, int height, int width, RGBTRIPLE image[height][width]);
RGBTRIPLE Gx(int i, int j, int height, int width, RGBTRIPLE image[height][width]);
RGBTRIPLE Gy(int i, int j, int height, int width, RGBTRIPLE image[height][width]);

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            BYTE avg = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtBlue = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtRed = avg;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp;
            temp = image[i][j];
            image[i][j] = image[i][width - j - 1];
            image[i][width - j - 1] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE blurred[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            blurred[i][j] = blursquare(i, j, height, width, image);
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = blurred[i][j];
        }
    }

    //how about giving image array full address to blurred?


    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE edged[height][width];
    RGBTRIPLE Gxresult, Gyresult;
    int blue, green, red;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            Gxresult = Gx(i, j, height, width, image);
            Gyresult = Gy(i, j, height, width, image);

            blue = round(sqrt(pow(Gxresult.rgbtBlue, 2) + pow(Gyresult.rgbtBlue, 2)));
            if (blue > 255)
            {
                blue = 255;
            }

            green = round(sqrt(pow(Gxresult.rgbtGreen, 2) + pow(Gyresult.rgbtGreen, 2)));
            if (green > 255)
            {
                green = 255;
            }

            red = round(sqrt(pow(Gxresult.rgbtRed, 2) + pow(Gyresult.rgbtRed, 2)));
            if (red > 255)
            {
                red = 255;
            }

            edged[i][j].rgbtBlue = blue;
            edged[i][j].rgbtGreen = green;
            edged[i][j].rgbtRed = red;
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = edged[i][j];
        }
    }

    return;
}

RGBTRIPLE blursquare(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE result;
    int sumRed = 0, sumGreen = 0, sumBlue = 0;
    int valid = 0;

    for (int y = i - 1; y <= i + 1; y++)
    {
        if (y < 0 || y > height - 1)
        {
            continue;
        }
        else
        {
            for (int x = j - 1; x <= j + 1; x++)
            {
                if (x < 0 || x > width - 1)
                {
                    continue;
                }
                else
                {
                    valid++;
                    sumBlue += image[y][x].rgbtBlue;
                    sumGreen += image[y][x].rgbtGreen;
                    sumRed += image[y][x].rgbtRed;
                }
            }
        }
    }
    result.rgbtBlue = round(sumBlue / (float) valid);
    result.rgbtGreen = round(sumGreen / (float) valid);
    result.rgbtRed = round(sumRed / (float) valid);

    return result;
}

RGBTRIPLE Gx(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE result;
    int GxRed = 0, GxGreen = 0, GxBlue = 0;

    for (int y = i - 1; y <= i + 1; y++)
    {
        if (y < 0 || y > height - 1)
        {
            continue;
        }

        for (int x = j - 1; x <= j + 1; x++)
        {
            if (x < 0 || x > width - 1)
                {
                    continue;
                }

            if (x == j)
            {
                GxBlue += image[y][x].rgbtBlue * 0;
                GxGreen += image[y][x].rgbtGreen * 0;
                GxRed += image[y][x].rgbtRed * 0;
            }

            else if (((y == i - 1) || (y == i + 1)) && x == j - 1)
            {
                GxBlue += image[y][x].rgbtBlue * -1;
                GxGreen += image[y][x].rgbtGreen * -1;
                GxRed += image[y][x].rgbtRed * -1;
            }

            else if (((y == i - 1) || (y == i + 1)) && x == j + 1)
            {
                GxBlue += image[y][x].rgbtBlue;
                GxGreen += image[y][x].rgbtGreen;
                GxRed += image[y][x].rgbtRed;
            }

            else if (y == i && x == j - 1)
            {
                GxBlue += image[y][x].rgbtBlue * -2;
                GxGreen += image[y][x].rgbtGreen * -2;
                GxRed += image[y][x].rgbtRed * -2;
            }

            else if (y == i && x == j + 1)
            {
                GxBlue += image[y][x].rgbtBlue * 2;
                GxGreen += image[y][x].rgbtGreen * 2;
                GxRed += image[y][x].rgbtRed * 2;
            }
        }
    }

    result.rgbtBlue = GxBlue;
    result.rgbtGreen = GxGreen;
    result.rgbtRed = GxRed;

    return result;
}

RGBTRIPLE Gy(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE result;
    int GyRed = 0, GyGreen = 0, GyBlue = 0;

    for (int y = i - 1; y <= i + 1; y++)
    {
        if (y < 0 || y > height - 1)
        {
            continue;
        }

        for (int x = j - 1; x <= j + 1; x++)
        {
            if (x < 0 || x > width - 1)
                {
                    continue;
                }

            if (y == i)
            {
                GyBlue += image[y][x].rgbtBlue * 0;
                GyGreen += image[y][x].rgbtGreen * 0;
                GyRed += image[y][x].rgbtRed * 0;
            }

            else if (y == i - 1 && ((x == j - 1) || (x == j + 1)))
            {
                GyBlue += image[y][x].rgbtBlue * -1;
                GyGreen += image[y][x].rgbtGreen * -1;
                GyRed += image[y][x].rgbtRed * -1;
            }

            else if (y == i + 1 && ((x == j - 1) || (x == j + 1)))
            {
                GyBlue += image[y][x].rgbtBlue;
                GyGreen += image[y][x].rgbtGreen;
                GyRed += image[y][x].rgbtRed;
            }

            else if (y == i - 1 && x == j)
            {
                GyBlue += image[y][x].rgbtBlue * -2;
                GyGreen += image[y][x].rgbtGreen * -2;
                GyRed += image[y][x].rgbtRed * -2;
            }

            else if (y == i + 1 && x == j)
            {
                GyBlue += image[y][x].rgbtBlue * 2;
                GyGreen += image[y][x].rgbtGreen * 2;
                GyRed += image[y][x].rgbtRed * 2;
            }
        }
    }

    result.rgbtBlue = GyBlue;
    result.rgbtGreen = GyGreen;
    result.rgbtRed = GyRed;

    return result;
}

