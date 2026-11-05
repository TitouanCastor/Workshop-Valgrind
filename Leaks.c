#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *str = NULL;

    if (argc > 1) {
        str = strdup(argv[1]);
    }
    printf("%s\n", str);
    return 0;
}
