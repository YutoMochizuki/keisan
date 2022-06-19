#include <stdio.h>
#include <math.h>
int main(void){

    double x1,x2,x3,a,b,c,D;

    scanf("%lf%lf%lf",&a,&b,&c);

    D=pow(b,2)-4*a*c;

    if(D>0){

	x1=(-b+sqrt(D))/(2.0*a);
x2=(-b-sqrt(D))/(2.0*a);

printf("%f %f\n",x1,x2);

    }else if(D==0){

x1=(-b)/(2.0*a);

printf("%f\n",x1);

    }else{

	D=fabs(D);

x1=(-b)/(2.0*a);
x2=sqrt(D)/(2.0*a);
x3=-sqrt(D)/(2.0*a);

printf("%f %f %f\n",x1,x2,x3);

    }
    return 0;
}



