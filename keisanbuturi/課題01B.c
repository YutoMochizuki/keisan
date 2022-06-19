#include <stdio.h>
#include <math.h>
double euler(double ,double ,double ,int);

int main(void){
    int n; 
    double x0,y0,xf;
    x0=0.0;
    xf=5.0;
    y0=1.0;
    n=1000;

    euler(x0,y0,xf,n); //数値解

    return 0;
}
double df(double x,double y){
    double z;
    double p,m;//密度と質量級数係数
    p=2.7;
    m=0.552;
z=-p*m*y;//微分方程式
return z;
}

double euler(double x0,double y0,double xf,int n){
    int i;
    double x,y,h,k1,k2,k3,k4;

    h=(xf-x0)/n;
    x=x0;
    y=y0;

    for(i=0;i<n;i++){
if (y>0.01)
    {
	k1=df(x,y);
	k2=df(x+h/2.0,y+h*k1/2.0);
	k3=df(x+h/2.0,y+h*k2/2.0);
	k4=df(x+h,y+h*k3);

	y+=h*(k1+2.0*k2+2.0*k3+k4)/6.0;

	x+=h;

    
      
    }

	    }

printf("%.20f %.20f\n",x,y);

    return y;
}
