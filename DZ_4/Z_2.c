#include <stdio.h>

/* Задача 2. Ровно три цифры */
int main() {
    int num, dig = 0;
    printf("Введите целое положительное число\n");
    scanf("%d", &num);
    while(num != 0){
        num /= 10;
        dig++;
    }
    printf("%s\n", dig == 3 ? "YES" : "NO");
    return 0;
}