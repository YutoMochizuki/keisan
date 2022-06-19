#include <stdio.h>
#include <math.h>

int main(void){

    double x1,x2,a,b,c,D;

    a=1.0;
    b=1.0;
    c=0.01;


    D=pow(b,2)-4*a*c;

   

    x1=(-b+sqrt(D))/(2.0*a);
    x2=(-b-sqrt(D))/(2.0*a);


printf("%.20e\n",x1*x2-c);

    return 0;
}

