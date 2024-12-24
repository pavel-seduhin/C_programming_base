#include <stdio.h>

/* Задача 3. В порядке возрастания */
int main() {
    int a, b, c;
    printf("Введите три целых числа через пробел\n");
    scanf("%d%d%d", &a, &b, &c);
    printf(a < b && b < c ? "YES\n" : "NO\n");
    return 0;
}