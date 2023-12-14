#include <stdio.h>
#define true 0
#define false 1


void regressionLine(float a[], float b[], int n, int flag){

    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for(int i = 0; i<n; i++){
        sumX+= a[i];
        sumY+= b[i];
        sumX2+= a[i] * a[i];
        sumXY+= a[i] * b[i];
    }

    float xm, ym;
    xm = sumX / n;
    ym = sumY / n;


    float slope = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);

    float intercept = (sumY - slope * sumX) / n;

    if(flag == true) {
        printf("Fitted line: y = %.2fx + %.2f\n", slope, intercept);
    }else {
        printf("Fitted line: x = %.2fy + %.2f\n", slope, intercept);
    }

}   


int main(){
    int n;
    printf("Enter the number points:    ");
    scanf("%d", &n);

    float x[n], y[n];
    printf("Enter the x elements:       ");
    for(int i = 0; i<n; i++){
        scanf("%f", &x[i]);
    }

    
    printf("Enter the y elements:       ");
    for(int i = 0; i<n; i++){
        scanf("%f", &y[i]);
    }


    // y on x
    regressionLine(x, y, n, true);

    // x on y

    regressionLine(y, x, n, false);
    


    return 0;

}