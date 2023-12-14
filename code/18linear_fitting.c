#include <stdio.h>
#include <math.h>

int main(){

    int sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, x[20], y[20], n;
    float a, b;
    printf("The number of element:      ");

    scanf("%d", &n);

    printf("Enter the element in the x: ");
    for(int i = 0; i<n; i++){
        scanf("%f", &x[i]);
    }

    printf("Enter the element in the y: ");
    for(int i = 0; i<n; i++){
        scanf("%f", &y[i]);
    }

    // make the sum

    for(int i = 0; i<n; i++){
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    // formula for straight line

    a=((sum_x2 *sum_y -sum_x*sum_xy)*1.0/(n*sum_x2-sum_x*sum_x)*1.0);
    b=((n*sum_xy-sum_x*sum_y)*1.0/(n*sum_x2-sum_x*sum_x)*1.0);

    printf("The line is Y = %3.3f  + %3.3fX\n", a, b);

    return 0;
}