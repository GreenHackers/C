#include <stdio.h>
#include <stdlib.h>
void funTemF2C(void);

int main()
{

    funTemF2C();
    return 0;
}

void funTemF2C(void)
{
    float tc;
    float tf;
    printf("enter tf ");
    scanf("%f",&tf);

    tc=5*(tf-32)/9;

    printf("tc is %f",tc);
}
