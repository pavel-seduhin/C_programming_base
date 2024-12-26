#include <stdio.h>

/* Задача 3. Все цифры четные */
int main() {
    int num;
    printf("Введите целое положительное число\n");
    scanf("%d", &num);
    while(num != 0){
        if(num % 2 == 0){
        num /= 10;
        }
        else{
        printf("NO\n");
        return 0;
        }
    }
    printf("YES\n");
    return 0;
}