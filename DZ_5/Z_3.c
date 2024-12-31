#include <stdio.h>

/* Задача 3. Сумма цифр равна произведению */

int happy_num(int n){  
    int i, sum = 0, prod = 1; 
    for(i = n; i != 0; i /= 10)
    {
        int dig = i % 10;
        sum += dig;
        prod *= dig;    
    }
    return (sum == prod);
}

int main() {
    int n;
    printf("Введите целое не отрицательное число\n");
    scanf("%d", &n);
    if(n <= 10){
        printf("Число должно быть больше 10\n");
        return 0;
    }
    printf("%s\n", happy_num(n) ? "YES" : "NO");
    return 0;
}