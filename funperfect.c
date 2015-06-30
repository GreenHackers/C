#include <stdio.h>
#include <stdlib.h>
float funPrintInt(float r);
void funCalculateArea(void);
int main()
{
    funCalculateArea();
    return 0;
}

void funCalculateArea(void)
{
    float k;
    float fArea;
    printf("enter k ");
    scanf("%f",&k);
    fArea=funPrintInt(k);
    printf("area = %f",fArea);
}

float funPrintInt(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}
