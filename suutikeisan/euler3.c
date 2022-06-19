#include <stdio.h>
#include <math.h>
double euler(double ,double ,double ,int);

int main(void){
    int n; 
    double x0,y0,xf;
    x0=0.0;
    xf=1.0;
    y0=0.0;
    n=10000;
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

   
    x=xf;

    for(i=2;i<n;i*=2){ 
y=y0;
h=(xf-x0)/(10*i);
	y+=h*df(x,y);

	printf("%.20f %.20f \n",log(h),log(fabs(y-1+1/exp(x))));
	    }

    return y;
}
