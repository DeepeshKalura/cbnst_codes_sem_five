#include <stdio.h>
 
typedef struct {
    float x, y;
} Point;

void fitParabola(Point data[], int n ,float *a, float *b, float *c) {
    
    float sumX = 0, sumY = 0, sumX2 = 0, sumX3 = 0, sumX4 = 0, sumXY = 0, sumX2Y = 0;
    
    for(int i = 0; i<n; i++){
        float xi = data[i].x;
        float yi = data[i].y;

        // filling values

        sumX += xi;
        sumY += yi;
        sumX2 += xi*xi;
        sumX3 += xi*xi*xi;
        sumX4 += xi*xi*xi*xi;
        sumXY += xi * yi;
        sumX2Y += xi*xi*yi; 
    }

    double denominator = n * sumX2 * sumX4 - sumX3 * sumX3;
    *a = (sumX2Y * sumX2 * sumX3 - sumXY * sumX3 * sumX4 + sumY * sumX3 * sumX4) / denominator;
    *b = (n * sumXY * sumX4 - sumY * sumX2 * sumX4 - sumX2Y * sumX3 * sumX2 + sumX * sumY * sumX4) / denominator;
    *c = (n * sumX2Y * sumX3 - sumXY * sumX2 * sumX3 - sumX * sumX2Y * sumX4 + sumX2 * sumY * sumX4) / denominator;
}

int main(){
    int n; 

    printf("Enter the value of element:     ");
    scanf("%d", &n);


    Point data[n];
    printf("Enter the x points:     ");
    for(int i = 0; i<n; i++){
        scanf("%f", &data[i].x);
    }

    printf("Enter the y points:     ");
    for(int i = 0; i<n; i++){
        scanf("%f", &data[i].y);
    }
    // constanst for equations
    float a, b, c;
    fitParabola(data, n, &a, &b, &c);

    printf("The parabolic equations is:    Y= %.2f + %.2fX + %.2FX^2\n",a,b,c);

    

    return 0;
}