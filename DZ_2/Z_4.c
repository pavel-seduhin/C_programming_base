#include <stdio.h>

/* Задача 4. Найти среднее арифметическое цифр
числа */
int main() {
    int x, a, b, c, d;
    float ave;
    printf("Введите четырехзначное целое положительное число\n");
    scanf("%d", &x);
    a = x / 1000;
    b = (x / 100) % 10;
    c = (x / 10) % 10;
    d = x % 10;
    printf("%.2f\n", ave = (a + b + c + d) / 4.);
    return 0;
}