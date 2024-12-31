#include <stdio.h>

/* Задача 4. Сумма от 1 до N */
int total(int n)
{
    int sum;
    (n % 2) == 0 ? (sum = (n + 1)*(n / 2)) : (sum = n  * ((n - 1) / 2) +1);
    return sum;
}

int main()
    {
        int n;
        printf("Введите целое положительное число\n");
        scanf("%d", &n);
        printf("%d\n", total(n));
        return 0;
    }