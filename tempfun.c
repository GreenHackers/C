#include <stdio.h>
void funTemF2C(void);

int main()
{

    funTemF2C();
    return 0;
}

void funTemF2C()
{
    float tc,tf;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&tf);

    tc=5*(tf-32)/9;

    printf("Temperature in Celcius is %f",tc);
}
