#include <stdio.h>

/* Задача 4. Какое время года */
int main() {
    int mounth;
    printf("Введите номер месяца\n");
    scanf("%d", &mounth);
    if (1 > mounth || mounth > 12)
        printf("Нет такого месяца\n");
    else
        if(mounth == 1 || mounth == 2 || mounth == 12)
            printf("winter\n");
        else
            if(mounth == 3 || mounth == 4 || mounth == 5)
                printf("spring\n");
            else
                if(mounth == 6 || mounth == 7 || mounth == 8)
                    printf("summer\n");
                else printf("autumn\n");
    return 0;
    
}