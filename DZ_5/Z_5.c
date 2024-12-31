#include <stdio.h>

/* Задача 5*. Скобки */

int bracket_type(int sign)
{
    if(sign == ')')
    { 
        return 1;
    }
    return -1;
}

int bracket_order(int sign)
{
    int order = 0;
    while ((sign =getchar()) != '.')
        {
            order = order + bracket_type(sign);
            if(order > 0)
            {
                return order;
            }
        }
    return order;
}

int main()
{
    int sign = 0;    
    printf("%s\n", bracket_order(sign) ? "NO" : "YES");
    return 0;
}