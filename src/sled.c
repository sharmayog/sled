#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Supply file name.\n"
                        "Usage\n"
                        "sled FILE");
        return 0;
    }

    char inputBuffer[128];
    Input input;

    FILE *fp = fopen(argv[1], "r+");
    if (!fp)
    {
        return 74;
    }

    while ((input = getinput(inputBuffer)) != INPUT_EXIT)
    {
    }

    return 0;
}