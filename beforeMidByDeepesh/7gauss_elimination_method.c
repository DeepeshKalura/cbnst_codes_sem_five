#include <stdio.h>


int main(){
    int n = 3; 
    float eq[n][n+1];

    // Enter the equation dal de
    printf("Enter the equation value x + y + z = d");
    for(int i = 0; i<n; i++){
        
        
        printf("\nEnter the %d equation:     ", i+1);
        for(int j = 0; j<=n; j++){
            scanf("%f", &eq[i][j]);   
        }
    }

    // gauss elimation method

    // upper triangular matrix

    for(int i = 0; i<n; i++){
        
        for(int j = i+1; j<n; j++){
            
            float factor = eq[j][i] / eq[i][i];

            for(int k = 0; k<=n; k++){
                eq[j][k] -= factor * eq[i][k];
            }
        }
    }

    printf("Upper triangular matrix:    \n");

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%f  ", eq[i][j]);
        }
        printf("\n");
    }
    // printMatrix(n, n, eq);

    // back substitution

    char c = 'z';
    float solution[n];
    for (int i = n - 1; i >= 0; i--) {
        solution[i] = eq[i][n];
        for (int j = i + 1; j < n; j++) {
            solution[i] -= eq[i][j] * solution[j];
        }
        solution[i] /= eq[i][i];
        printf("%c is %.2f\n", c , solution[i]);
        c--;
    }  
    return 0;
}