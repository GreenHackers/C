#include<stdio.h>
#include<stdlib.h>
float funArea(float r);

int main()
{
    int i=0; //looping counter
    float fArea,fRadius;
	FILE* fpTest;
	fpTest=fopen("d:\\area.txt","a");

	//for(i=0;i<10;i++)
	for(i=1;i<=10;i++)
    {
        printf("enter radius ");
        scanf("%f",&fRadius);
        fArea=funArea(fRadius);
        printf("%f\n",fArea);
        fprintf(fpTest,"the Area is %f if the Radius is %f\n",fArea,fRadius);
    }


    fclose(fpTest);

    system("notepad d:\\area.txt");

	return 0;
}


float funArea(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}



