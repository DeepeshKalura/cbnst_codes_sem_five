#include<stdio.h>
#include<math.h>

#define function f
#define dfunction df 
#define allerror 0.000001

float function(float x){
    return x*x*x - x*x +2;
}
float dfunction(float x){
    return 3*x*x-2*x;
}
int main()
{
    float x0;
    printf("Enter your first guess: ");
    scanf("%f",&x0);
    float x1,val,dval;
    int i=0;
    do
    {
        i++;
        val=f(x0);
        dval=df(x0);
        x1= x0 - (val/dval) ;
        if((fabs(f(x1)))<=allerror )
        {
            printf("Root is %f value is %f",x1,f(x1));
            break;
        }
        printf("First iteration is %d value of x is %f function value is : %f\n",i,x1,f(x1));
        x0=x1;

    } while (1);
    

}