#include <stdlib.h>
#include <stdio.h>

void my_fill(int *tab, int len)
{
    for (int i = 0; i < len; i++) {
        tab[i] = i;
    }
}

int main(void)
{
    int *tab = malloc(sizeof(int) * 5);

    my_fill(tab, 5);
    printf("tab[0] = %d\n", tab[0]);
    free(tab);
}
