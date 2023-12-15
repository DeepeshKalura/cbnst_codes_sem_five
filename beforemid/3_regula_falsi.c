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
    do
    {
        printf("Enter the value for x0: ");
        scanf("%f",&x0);
        printf("Enter the value for x1: ");
        scanf("%f",&x1);
        if(f(x0)*f(x1)<1)
        {
            printf("Root lies bw This range \n");
            break;    
        }
        else
        {
            printf("Enter a differnt range \n");
        }
    } while (1);

    int i=0;
    do
    {
        i++;
        x= ((x0 * f(x1)) - (x1* f(x0))) / (f(x1)-f(x0));
        printf(" %d iteration value of x is %f  value is %f \n",i,x,f(x));
        if(fabs(f(x)) < allerror )
        {
            printf("Root is %f and function value is : %f",x,f(x));
            break;
        }
        if(f(x)* f(x0) <1)
            x1=x;
        else
            x0=x;
    } while (1);
   
    
}