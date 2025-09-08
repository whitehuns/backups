#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    if (src == NULL || dst == NULL)
    {
        return 1;
    }

    BYTE b[100];

    while (fread(&b, sizeof(b) / 100, 100, src) > 0)
    {
        fwrite(&b, sizeof(b) / 100, 100, dst);
    }

    fclose(dst);
    fclose(src);

    return 0;
}
