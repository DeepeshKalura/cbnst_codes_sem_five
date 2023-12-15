#include<stdio.h>
#include<math.h>

float e1(float x,float y, float z){
	return  (17-y+2*z)/20;
}
float e2(float x,float y, float z){
	return  (-18 - 3*x + z)/20;
}
float e3(float x,float y, float z){
	return  (25 -2*x + 3*y)/20;
}


int main()
{
	float x0=0,y0=0,z0=0,x1,y1,z1,e;
	float allerr1,allerr2,allerr3;
	int count =1;
	printf("Enter tolerable error: ");
	scanf("%f",&e);
	printf("\n count \t x \t y \t z \n");
	do
	{
		x1=e1(x0,y0,z0);
		y1=e2(x0,y0,z0);
		z1=e3(x0,y0,z0);
		printf("%d \t %f \t %f \t %f \n",count,x1,y1,z1);
		count++;
		allerr1=fabs(x0-x1);
		allerr2=fabs(y0-y1);
		allerr3=fabs(z0-z1);
		x0=x1;
		y0=y1;
		z0=z1;

	} while (allerr1>e && allerr2>e && allerr3>e);
	printf("Solution is x=%0.3f y= %0.3f z=%0.3f ",x1,y1,z1);
	return 0;
}