#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void my_strcpy(char *dest, const char *src)
{
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    char *str = strdup("valgrind\n");
    char *result = malloc(sizeof(char) * strlen(str));

    my_strcpy(result, str);
    my_putstr(result);
    free(str);
    free(result);
}
