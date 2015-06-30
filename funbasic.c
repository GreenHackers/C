#include <stdio.h>
#include <stdlib.h>
void funAreaOfCircle(void);


int main()
{
    funAreaOfCircle();

    return 0;
}




void funAreaOfCircle(void)
{
    float a;
    float r;
    printf("enter r ");
    scanf("%f",&r);

    a = 3.14 * r * r;

    printf("area = %f ",a);

}
