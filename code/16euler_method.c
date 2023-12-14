#include <stdio.h>


float f(float x, float y){
    return (x + y + x*y);
}

void euler(float x0, float y0, float h, float uptoWhichPointOfX){
    while(uptoWhichPointOfX > x0) {
        y0 = y0 + h * (f(x0, y0)); 
        x0 += h;
    }
    printf("In euler At x = %f we have y = %f\n", x0, y0);
}

// extra start here
void improvedEuler(float x0, float y0, float h, float uptoWhichPointOfX) {
    while(uptoWhichPointOfX > x0) {
        y0 = y0 + (h * (f(x0, y0) + f(x0+h,  y0+ h * f(x0, y0))) / 2 );
        x0 += h;
    }
    printf("In improved euler At x = %f we have y = %f\n", x0, y0);
}



// extra ends here

int main(){

    float x0 = 0, y0 = 1;
    // jumping height
    float h = 0.025;

    float uptoWhichPointOfX = 0.1;
    euler(x0, y0, h, uptoWhichPointOfX);

    // extra one
    improvedEuler(x0, y0, h, uptoWhichPointOfX);

    return 0;
}