#include <stdio.h>

/* Задача 3. Все цифры четные */
int main() {
    int num, even = 0, dig = 0;
    printf("Введите целое положительное число\n");
    scanf("%d", &num);
    while(num != 0){
        if (num % 2 == 0){
            even++;
        }
        num = num / 10;
        dig++;
    }
    printf("%s\n", dig == even ? "YES" : "NO");
    return 0;
}