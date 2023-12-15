#include <stdio.h>


struct Point {
    double x;
    double y;
};

double lagrangeInterpolation(struct Point points[], int n, double x) {
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        double term = points[i].y;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term = term * (x - points[j].x) / (points[i].x - points[j].x);
            }
        }
        result += term;
    }

    return result;
}

int main() {
    // Example usage
    int n = 5; // Number of points
    struct Point points[] = {{5, 150}, {7,392}, {11, 1452}, {13,2366},{17,5202}};

    // Interpolate at x = 2.5
    double x_value = 9;
    double interpolatedValue = lagrangeInterpolation(points, n, x_value);

    printf("Interpolated value at x = %f: %f\n", x_value, interpolatedValue);

    return 0;
}
