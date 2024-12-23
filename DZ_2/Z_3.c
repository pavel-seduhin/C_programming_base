#include <stdio.h>

/* Задача 3. Разность двух чисел */
int main() {
    int a, b, diff;
    printf("Введите два целых числа через пробел\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", (diff = a - b));
    return 0;
}