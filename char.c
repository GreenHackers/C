#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("enter a char !\n");
    do{
        c=getch();
        printf("\nyou enter char %c = %d =%x",c,c,c);
    }while(c!=(char)13);
    return 0;
}
