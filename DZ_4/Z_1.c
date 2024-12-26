#include <stdio.h>

/* Задача 1. Сумма квадратов маленьких чисел */
int main() {
    int a, b, i, sum = 0;
    printf("Введите через пробел два целых числа не больше 100 по модулю\n");
    scanf("%d%d", &a, &b);
    if (a < b){
        for(i = a; i <= b; i ++) {
            sum += i * i;
        }
    }
    else {
        for(i = b; i <= a; i++) {
            sum += i * i;
        }
    }
    printf("%d\n", sum);
    return 0;
}