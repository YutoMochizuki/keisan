#include <stdio.h>
#include <math.h>
double euler(double ,double ,double ,int);

int main(void){
    int n; 
    double x0,y0,xf,a;
    x0=0.0;
    xf=1.0;
    y0=0.0;
    n=10000000;
    a=euler(x0,y0,xf,n);
    printf("%f\n",a);
    return 0;
}
double df(double x,double y){
    double z;
z=1.0-y;
return z;
}

double euler(double x0,double y0,double xf,int n){
    int i;
    double x,y,h,k1,k2,k3,k4;

   
    

    for(i=2;i<=n;i*=2){
	h=(xf-x0)/(10*i);
x=xf;
y=y0-(xf-x0)/20;
	y+=h*(k1+2.0*k2+2.0*k3+k4)/6.0;

	k1=df(x,y);
	k2=df(x+h/2.0,y+h*k1/2.0);
	k3=df(x+h/2.0,y+h*k2/2.0);
	k4=df(x+h,y+h*k3);
	printf("%.20f %.20f\n",log(h),log(fabs(y-1+1/exp(xf))));
	    }

    return y;
}
