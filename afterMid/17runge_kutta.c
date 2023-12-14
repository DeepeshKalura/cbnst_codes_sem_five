#include <stdio.h>
#include <math.h>

float f(float x, float y){
    return  (x * x) + (y * y);
}


int main(){
    float h = 0.025;

    float x0 = 1, y0 = 1.2, x = 1.05;
    float k1, k2, k3, k4, k;
    // runge kutta method

    while(x>x0) {
        k1 = h * f(x0, y0);
        k2 = h * f((x0 + (h/2)), (y0 + (k1/2)));
        k3 = h * f(x0 + h*0.5, y0 + k2*0.5);
        k4 = h * f(x0  + h, y0 + k3);

        k = (k1 + 2*k2 + 2*k3+ k4) * ( 1.0 / 6.0);

        y0 = y0 + k;
        x0 += h;
    }

    printf("Runge Kutta Method value of y at %f is :    %f\n", x0, y0);

    return 0;
}