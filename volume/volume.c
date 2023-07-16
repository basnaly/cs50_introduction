// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file

    // Create an array of bytes to store the data from the WAV file header of input file
    uint8_t header[HEADER_SIZE] = malloc(sizeof(uint8_t) * HEADER_SIZE);

    // Create a “buffer” to store audio samples that will be read from the WAV file
    int16_t buffer;

    // Read the header from the input file
    FILE *input = fread(buffer, sizeof(header), 1, input);

    // Write the header to the input file
     FILE *output = fwrite(buffer, sizeof(header), 1, output);

    // TODO: Read samples from input file and write updated data to output file
    while (*input != NULL)
    {
        buffer = factor * buffer;
        FILE *output = fwrite(buffer, sizeof(header), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);
    free(header);
}
