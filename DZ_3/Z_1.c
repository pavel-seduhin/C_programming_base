#include <stdio.h>

/* Задача 1. Наибольшее из пяти чисел */
int main() {
    int a, b, c, d, e, max;
    printf("Введите пять целых чисел через пробел\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a;
    max = b > max ? b : max;
    max = c > max ? c : max;
    max = d > max ? d : max;
    max = e > max ? e : max;
    printf("%d\n", max);
    return 0;
}