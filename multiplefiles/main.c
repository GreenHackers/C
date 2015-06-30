#include <stdio.h>
#include <stdlib.h>
void funHello(void);
void funArea(void);

int main()
{
    int iAns;
    do{
            system("cls");//creen clear
            printf("0-exit\n");
            printf("1-hello\n");
            printf("2-area\n");
            printf("enter your choice ");
            scanf("%d",&iAns);
            switch(iAns)
            {
            case 0: exit(0);
            case 1:  funHello(); break;
            case 2:  funArea(); break;
            default: printf("wrong input, try again \n");  system("pause");break;

            }

    }while(iAns!=0); //until user enter 0


    return 0;
}





