#include <stdio.h>
#include <math.h>

float f(float x){
	return (1 / (1+x*x));
}




int main(){
	float a=0,b=2; // lmits

	printf("Enter the lower limits :	");
	scanf("%f", &a);
	printf("Enter the upper limits:		");
	scanf("%f", &b);

	
	int n=6; // number of intervals
	printf("Enter the sub-interval:		");
	scanf("%d", &n);
	
	float h=(b-a)/n;
	float sum=0;


	// formula logic simpson 1/3 
	for(int i = 0; i<=n; i++){
		if(i==0 || i==n){
			sum+=f(i*h);
		}else if(i%2!=0){
			sum+=4*f(i*h);
		} else {
			sum+=2*f(i*h);
		}
	}


	printf("Simposon answer is:		%f\n", (float)((sum * h)/ 3));
}
