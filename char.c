#include <stdio.h>
#include <stdlib.h>

int main()
{
    char d;
    printf("enter a char !\n");
    do{
        d=getch();
        printf("\nyou enter char %c = %d =%x",d,d,d);
    }while(d!=(char)13);
    return 0;
}
