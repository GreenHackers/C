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
            case 0: printf("exiting...."); exit(0); break;
            case 1: printf("area\n"); break;
            case 2: printf("gold price\n");break;
            case 3: printf("help\n");break;

            }
            printf("\n");
            system("pause");

    }while(ans!=0);


    return 0;

}
