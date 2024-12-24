#include <stdio.h>

/* Задача 2. Наименьшее из пяти чисел */
int main() {
    int a, b, c, d, e, min;
    printf("Введите пять целых чисел через пробел\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    min = a;
    min = b < min ? b : min;
    min = c < min ? c : min;
    min = d < min ? d : min;
    min = e < min ? e : min;
    printf("%d\n", min);
    return 0;
}