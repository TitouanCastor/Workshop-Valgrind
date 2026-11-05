#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void my_fill(char **tab, int len)
{
    for (int i = 0; i <= len; i++) {
        tab[i] = strdup("fill");
    }
}

int main(void)
{
    char **tab = malloc(sizeof(long) * 5);

    my_fill(tab, 5);
    printf("tab[0] = %s\n", tab[0]);
    free(tab);
}
