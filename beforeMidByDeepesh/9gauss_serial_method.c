#include <stdio.h>

// Function to perform the Gauss-Seidel iteration
void seidel(int n, float a[n][n], float x[n], float b[n]) {
    for (int j = 0; j < n; j++) {
        double d = b[j];

        for (int i = 0; i < n; i++) {
            if (j != i) {
                d -= a[j][i] * x[i];
            }
        }

        x[j] = d / a[j][j];
    }
}

int main() {
    int n = 3;

    float x[] = {0, 0, 0};


    // float eq[n][n];
    // printf("Enter the value of x     ");
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){s
    //         scanf("%d", &eq[i][j]);
    //     }
    // }

    float eq[][3] = {{4, 1, 2},
                     {3, 5, 1},
                     {1, 1, 3}};


    float b[] = {4, 7, 3};
    // printf("Enter the value for the d   ");
    // for(int i = 0; i<n; i++){
    //     scanf("%f", &b);
    // }


    printf("Initial Solution:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\t", x[i]);
    }
    printf("\n");

    for (int iter = 0; iter < 25; iter++) {
        seidel(n, eq, x, b);

        printf("Iteration %d:\n", iter + 1);
        for (int i = 0; i < n; i++) {
            printf("%.2f\t", x[i]);
        }
        printf("\n");
    }

    return 0;
}
