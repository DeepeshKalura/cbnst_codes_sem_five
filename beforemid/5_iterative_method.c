#include<stdio.h>
#include<math.h>
#define function f
#define gfunction g
#define allerror 0.000001
float function(float x)
{
    return cos(x) - 3*x +1;
}

float gfunction(float x)
{
    return (1+ cos(x))/3;
}


int main()
{
    int step=0,mxStep;    
    float x0,x1;
    printf("Enter initial guess :");
    scanf("%f",&x0);
    printf("Enter maximum steps :");
    scanf("%d",&mxStep);
    printf("Step \t x0 \t\t f(x0) \t\t x1 \t\t f(x1)\n");
    do
    {
        x1=g(x0);
        step++;
        printf("%d \t %f \t %f \t %f \t %f\n",step,x0,f(x0),x1,f(x1));

        if(step>mxStep)
        {
            printf("Not convergent ");
            exit(1);
        }

        x0=x1;
        
    } while (fabs(f(x1))>=allerror);
    printf("Root is: %f",x1);
    
    return 0;
}