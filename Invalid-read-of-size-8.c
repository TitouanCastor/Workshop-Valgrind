#include <stdlib.h>
#include <stdio.h>

long my_sum(long *tab, int len)
{
    long sum = 0;

    for (int i = 0; i <= len; i++) {
        sum += tab[i];
    }
    return sum;
}

int main(void)
{
    long *tab = malloc(sizeof(long) * 5);

    for (int i = 0; i < 5; i++) {
        tab[i] = i;
    }
    printf("sum = %ld\n", my_sum(tab, 5));
    free(tab);
}
