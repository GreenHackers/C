#include<stdio.h>
#include<stdlib.h>
float funArea(float r);

int main()
{
    int x=0; //looping counter

    float fArea,fRadius;
	FILE* fpTest;
	fpTest=fopen("d:\\area.txt","a");

	//for(i=0;i<10;i++)
	for(x=1;x<=10;x++)
    {
        fArea = 2*x;
        printf("%f\n",fArea);
        fprintf(fpTest,"the fx is %f if the x is %d\n",fArea,x);

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



