#include <stdio.h>

/* Задача 2. Сумма и произведение трех чисел */
int main() {
    int a, b, c;
    printf("Введите три целых числа через пробел\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d + %d + %d = %d\n", a, b, c, (a + b + c));
    printf("%d * %d * %d = %d \n", a, b, c, (a * b * c));
    return 0;
}