#include <stdlib.h>
#include <stdio.h>

int my_sum(int *tab, int len)
{
    int sum = 0;

    for (int i = 0; i <= len; i++) {
        sum += tab[i];
    }
    return sum;
}

int main(void)
{
    int *tab = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++) {
        tab[i] = i;
    }
    printf("sum = %d\n", my_sum(tab, 5));
    free(tab);
}
