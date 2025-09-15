#include "helpers.h"
#include <math.h>

typedef struct
{
    int red;
    int green;
    int blue;
}RGB;
// for Gx and Gy to store sum of Sobel-weighted values (which can far exceed BYTE -> so have to save as int)
// Datatype Overflow !! (int -> BYTE)

RGBTRIPLE blursquare(int i, int j, int height, int width, RGBTRIPLE image[height][width]);
RGB Gx(int i, int j, int height, int width, RGBTRIPLE image[height][width]);
RGB Gy(int i, int j, int height, int width, RGBTRIPLE image[height][width]);

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
    RGB Gxresult, Gyresult;
    int blue, green, red;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            Gxresult = Gx(i, j, height, width, image);
            Gyresult = Gy(i, j, height, width, image);

            blue = round(sqrt(pow(Gxresult.blue, 2) + pow(Gyresult.blue, 2)));
            if (blue > 255)
            {
                blue = 255;
            }

            green = round(sqrt(pow(Gxresult.green, 2) + pow(Gyresult.green, 2)));
            if (green > 255)
            {
                green = 255;
            }

            red = round(sqrt(pow(Gxresult.red, 2) + pow(Gyresult.red, 2)));
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

RGB Gx(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    RGB gx;
    gx.red = 0, gx.green = 0, gx.blue = 0;

    for (int y = i - 1; y <= i + 1; y++)
    {
        if (y < 0 || y > height - 1)
        {
            continue;
        }

        for (int x = j - 1; x <= j + 1; x++)
        {
            if (x < 0 || x > width - 1 || x == j)
                {
                    continue;
                }

            else if (((y == i - 1) || (y == i + 1)) && x == j - 1)
            {
                gx.blue += image[y][x].rgbtBlue * -1;
                gx.green += image[y][x].rgbtGreen * -1;
                gx.red += image[y][x].rgbtRed * -1;
            }

            else if (((y == i - 1) || (y == i + 1)) && x == j + 1)
            {
                gx.blue += image[y][x].rgbtBlue;
                gx.green += image[y][x].rgbtGreen;
                gx.red += image[y][x].rgbtRed;
            }

            else if (y == i && x == j - 1)
            {
                gx.blue += image[y][x].rgbtBlue * -2;
                gx.green += image[y][x].rgbtGreen * -2;
                gx.red += image[y][x].rgbtRed * -2;
            }

            else if (y == i && x == j + 1)
            {
                gx.blue += image[y][x].rgbtBlue * 2;
                gx.green += image[y][x].rgbtGreen * 2;
                gx.red += image[y][x].rgbtRed * 2;
            }
        }
    }

    return gx;
}

RGB Gy(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    RGB gy;
    gy.red = 0, gy.green = 0, gy.blue = 0;

    for (int y = i - 1; y <= i + 1; y++)
    {
        if (y < 0 || y > height - 1 || y == i)
        {
            continue;
        }

        for (int x = j - 1; x <= j + 1; x++)
        {
            if (x < 0 || x > width - 1)
                {
                    continue;
                }

            else if (y == i - 1 && ((x == j - 1) || (x == j + 1)))
            {
                gy.blue += image[y][x].rgbtBlue * -1;
                gy.green += image[y][x].rgbtGreen * -1;
                gy.red += image[y][x].rgbtRed * -1;
            }

            else if (y == i + 1 && ((x == j - 1) || (x == j + 1)))
            {
                gy.blue += image[y][x].rgbtBlue;
                gy.green += image[y][x].rgbtGreen;
                gy.red += image[y][x].rgbtRed;
            }

            else if (y == i - 1 && x == j)
            {
                gy.blue += image[y][x].rgbtBlue * -2;
                gy.green += image[y][x].rgbtGreen * -2;
                gy.red += image[y][x].rgbtRed * -2;
            }

            else if (y == i + 1 && x == j)
            {
                gy.blue += image[y][x].rgbtBlue * 2;
                gy.green += image[y][x].rgbtGreen * 2;
                gy.red += image[y][x].rgbtRed * 2;
            }
        }
    }

    return gy;
}

