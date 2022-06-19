#include <stdio.h>
#include <math.h>

double f(double);

int main(void){

    double x,e,y;
    x=-1.0;
    e=0.00000001;
    y=(f(x+e)-f(x-e))/2e;

    printf("%.12f",y);

    return 0;
}

double f(double r){
    double z;
    z=1.0/(1.0+r*r);
    return z;
}

