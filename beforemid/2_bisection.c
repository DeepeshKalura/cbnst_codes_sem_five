#include<stdio.h>
#include<math.h>

#define function f

float function(float x){
    return (x*x*x-x*x+2);}

int main()
{
    float x0,x1,x,allerror=0.00001;
    int i=0;
    do
    {
        printf("Enter value for x0:");
        scanf("%f",&x0);
        printf("Enter value for x1:");
        scanf("%d",&x1);
        if(f(x0)*f(x1) <0)
        {
            printf("Root lies bw %f and %f \n",x0,x1);
            break;
        }
        else
        {
            printf("Choose a differnt range\n");
        }
    } while (1);
    do
    {
        i++;
        x=(x0+x1)/2;
        printf("%d Interation value of x is %f value of f(%f) is \n",i,x,f(x));
        if(abs(f(x))<allerror){
            printf("Root of equation is %f after %d iteration ",x,i);
            break;
        }
        else if(f(x)*f(x0) <1)
        {
            x1=x;
        }
        else
        {
            x0=x;
        }
    } while (1);
    
}