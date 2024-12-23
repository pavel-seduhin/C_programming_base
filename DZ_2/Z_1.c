#include <stdio.h>

/* Задача 1. Сумма трех чисел */
int main () {
    int a, b, c, sum;
    printf("Введите три целых числа через пробел\n");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    printf("%d + %d + %d = %d\n", a, b, c, sum);
    return 0;
}