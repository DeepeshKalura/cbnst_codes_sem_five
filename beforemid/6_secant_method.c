#include<stdio.h>
#include<math.h>

#define function f
#define allerror 0.000001

float function(float x)
{
    return x*x*x - 2*x -5;
}
int main()
{
    float x0,x1,x;
    float f0,f1;
    printf("Enter initial guesses: ");
    scanf("%f %f",&x0,&x1);
    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    int step=0;
    do
    {
        step++;
        f0=f(x0);
        f1=f(x1);

        if(f0==f1)
        {
            printf("Mathematical error");
            return;
        }

        x= x1 - ((x1-x0)/(f1-f0))*f1;
        printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x,f(x));
        x0=x1;
        x1=x;


    } while (fabs(f(x)) >= allerror);
    printf("Root is %f ",x);

    return 0;
}