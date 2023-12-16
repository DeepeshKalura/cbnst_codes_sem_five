#include <stdio.h>

float f(float x){
    return (( x*x));
}

int main(){

    float a, b;
    printf("Enter the lower limit:  ");
    scanf("%f", &a);
    printf("Enter the upper limit:  ");
    scanf("%f", &b);

    int n;
    printf("Enter the sub-interval:     ");
    scanf("%d", &n);


    
    float h = (b-a)/n;
    float sum=0;

    // formula for trapezoidal rule

    for(int i = 0; i<=n; i++){
        if(i==0 || i==n){
            sum += f(i*h);
        }else {
            sum += 2 * f(i*h);
        }
    }

    printf("Trapezoid Rule:     %f\n", (float) (sum * h)/2);

    return 0;
}