#include <stdio.h>

/* Задача 5. Все счастливые числа */
int main() {
    int num, i;
    printf("Введите натуральное число большее 10\n");
    scanf("%d", &num);
    if(num <= 10){
        printf("Число должно быть больше 10\n");
        return 0;
    }
    else{
        for(i = 11; i <= num; i++){
            int rem = i, sum = 0, prod = 1;
            while(rem > 0){
                int dig = rem % 10;
                sum = sum + dig;
                prod = prod * dig;
                rem = rem / 10;      
            }
            if(sum == prod){
                printf("%d ", i);
            }
        }
    }
    printf("\n");
    return 0;
}