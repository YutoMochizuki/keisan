#include <stdio.h>
#include <math.h>

double f(double);

int main(void){
   
    double x,e,y,a,b,fa,fb;

    x=-1.0;
    e=0.00000001;
    a=x+e;
    b=x-e;

    y=(f(a)-f(b))/(2.0*e);

    
    printf("%.16f",y);

    return 0;
}


double f(double x){
    double z;

    z=1.0/(1.0+x*x);
return z;
}
