#include <stdio.h>

/* Задача 4. Перевернуть число */
int main() {
    int num, res = 0;
    printf("Введите целое положительное число\n");
    scanf("%d", &num);
    while(num != 0){
        res = (res * 10) + (num % 10);
        num /= 10;
    }
    printf("%d\n", res);
    return 0;
}