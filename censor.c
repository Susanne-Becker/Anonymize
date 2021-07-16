/**
 * Anonymize.c
 *
 * Implements the change image functionality.
 *
 * Gemaakt door: Susanne Becker
 */

#include "censor.h"

/**
 * Processes a given pixel (triple) and return the new one.
 */
RGBTRIPLE process_pixel(RGBTRIPLE old_triple, int y, int x)
{
    RGBTRIPLE new_triple = old_triple;

    //Make all pixels black between coordinates (170, 80) and (250, 105)
    for (int i = 0; i < (x > 170 && x < 250); i++) //pixels height
    {
        for (int j = 0; j < (y > 80 && y < 105); j++) //pixels width
        {
            new_triple.rgbtBlue = 0x00;
            new_triple.rgbtGreen = 0x00;
            new_triple.rgbtRed = 0x00;
        }
    }
    return new_triple;
}