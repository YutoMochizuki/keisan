#include <stdio.h>
#include <math.h>
double euler(double ,double ,double ,int);

int main(void){
    int n; 
    double x0,y0,xf;
    x0=0.0;
    xf=1.0;
    y0=0.0;

    for(n=20;n<1000000;n=n*2){

	printf("%f %f\n",log(xf/n),log(fabs(euler(x0,y0,xf,n)-1+exp(-xf))));
    }

    return 0;
}
double df(double x,double y){
    double z;
    z=1-y;
return z;
}

double euler(double x0,double y0,double xf,int n){

    int i;
    double x,y,h;

    h=(xf-x0)/n;
    x=x0;
    y=y0;

    for(i=0;i<n;i++){

	y+=h*df(x,y);
	x+=h;

	    }

    return y;
}
