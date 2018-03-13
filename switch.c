#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans;

    do{
            system("cls");
            printf("0-exit\n");
            printf("1-area\n");
            printf("2-gold price\n");
            printf("3-help\n");
            printf("please choose one ");
            scanf("%d",&ans);

            switch(ans)
            {
            case 0: printf("as your wish to exit\n"); exit(0); break;
            case 1: printf("find required area\n"); break;
            case 2: printf("wanna know gold price\n");break;
            case 3: printf("help needed?\n");break;
            default: printf("invalid choice please select correct option from above");break;       
            }
            printf("\n");
            system("pause");

    }while(ans!=0);


    return 0;

}
