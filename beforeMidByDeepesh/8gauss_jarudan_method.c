#include <stdio.h>





int main(){
    int n = 3;
    float eq[n][n+1];

    // Enter the equation dal de
    printf("Enter the equation value x + y + z = d");
    for(int i = 0; i<n; i++){
        printf("\nEnter the %d equation:    ", i+1);
        for(int j = 0; j<=n; j++){
            scanf("%f", &eq[i][j]);   
        }
    }

    // upper triangular matrix
    // two upper matrix conversion can make dignoal matrix

    for(int i = 0; i<n; i++){
        
        for(int j = 0; j<n; j++){

            if(j!=i){

            float factor = eq[j][i] / eq[i][i];

                for(int k = 0; k<=n; k++){
                    eq[j][k] -= factor * eq[i][k];  
                }
            }

        }
    }

    // print the dignoal matrix 
    printf("\n\nThe Dinganoal Matrix          \n");    

    for(int i = 0; i<n; i++){
        for(int j = 0; j<=n; j++){
            printf("%f  ", eq[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe solution is        \n");

    char c = 'x';
    float answer = -1;

    for(int i = 0; i<n; i++){
        answer = eq[i][n] / eq[i][i];
        
        printf("The value of %c is:      %.2f\n",c ,answer);
        c++;
    }

    // printf("The value of y is:      %.2f\n", eq[1][n+1] / eq[1][1]);
    // printf("The value of z is:      %.2f\n", eq[2][n+1] / eq[2][2]);




    



    return 0;
}