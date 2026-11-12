#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *str = NULL;

    if (argc > 1) {
        str = strdup(argv[1]);
    }
    if (str != NULL)
        printf("%s\n", str);
    free(str);
    return 0;
}
