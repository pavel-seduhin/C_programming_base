#include <stdio.h>

/* Задача 1. Сколько зерен на доске? */

long long unsigned rise_on_cell(int cell)
{
    long long unsigned res = 1;    
    for(int i = 1; i < cell; i++)
    {
        res = res * 2;
    }
    return res;
}

int main()
{
    int cell;
    printf("Введите целое число от 1 до 64\n");
    scanf("%d", &cell);
    printf("%Lu\n", rise_on_cell(cell)); 
    return 0;
}