#include <stdio.h>
#include <math.h>
double euler(double ,double ,double ,int);

int main(void){
    int n; 
    double x0,y0,xf;
    x0=0.0;
    xf=2*M_PI;
    y0=0.0;
    n=100;
    printf("%f\n",euler(x0,y0,xf,n));
    return 0;
}
double df(double x,double y){
    double z;
    z=sin(x)-y;
return z;
}

double euler(double x0,double y0,double xf,int n){
    int i;
    double x,y,h;

    h=(xf-x0)/n;
    x=x0;
    y=y0;
//printf("%f %f \n",x0,y0);
    for(i=0;i<n;i++){
	y+=h*df(x,y);
	x+=h;
	printf("%f %f \n",x,y);
	    }

    return y;
}
