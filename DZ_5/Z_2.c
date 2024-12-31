#include <stdio.h>

/* Задача 2. НОД */

int nod(int x, int y)
{
    int max, min, rem = 1;
    x > y ? (max = x) && (min = y) : (max = y) && (min = x);
    while(rem != 0)
    {
        rem = max - (max / min) * min;
        max = min;
        min = rem;
    }
    return max;
}

int main()
{
    int x, y;
    printf("Введите через пробел два целых положительных числа\n");
    scanf("%d%d", &x, &y);
    printf("%d\n", nod(x, y));
    return 0;
}