#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,e,mt,che,phy;
    int ms,es,mts,ches,phys;
    int ps=0,fs=0,ds=0;

    printf("enter m ");
    scanf("%d",&m);
    printf("enter e ");
    scanf("%d",&e);
    printf("enter mt ");
    scanf("%d",&mt);
    printf("enter che ");
    scanf("%d",&che);
    printf("enter phy");
    scanf("%d",&phy);

    if(m>=0&&m<40) ms=0; //fail
    if(m>=40&&m<80) ms=1; //pass
    if(m>=80&&m<100)ms=2; //d
    if(m<0&&m>100)ms=3; //error


    switch(ms)
    {
        case 0: fs++; break;
        case 1: ps++; break;
        case 2: ds++; break;
        case 3: printf("error"); break;
        default: printf("error"); break;
    }

    printf("fail %d\n",fs);
    printf("pass total %d\n",ps+ds);
    printf("pass only %d\n",ps);
    printf("d %d",ds);

    return 0;
}

