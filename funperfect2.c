#include <stdio.h>
#include <stdlib.h>
void funCalAreaOfTriangle(void);
float funAofTri(float b,float h);

int main()
{
    funCalAreaOfTriangle();
    return 0;
}

void funCalAreaOfTriangle(void)
{
    float a,b,h;

    printf("enter base ");
    scanf("%f",&b);
    printf("\nenter high ");
    scanf("%f",&h);

    a=funAofTri(b,h);

    printf("area of triangle %f",a);
}

float funAofTri(float b1,float h1)
{
    float a1;
    a1=0.5*b1*h1;
    return a1;
}

