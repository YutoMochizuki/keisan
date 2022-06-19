#include <stdio.h>
#include <math.h>
float euler(float ,float ,float ,int);

int main(void){
    int n; 
    float x0,y0,xf;
    x0=0.0;
    xf=1.0;
    y0=0.0;

    for(n=20;n<1000000;n*=2){

 printf("%.20f %.20f\n",log(xf/n),log(fabs(euler(x0,y0,xf,n)-1+exp(-xf))));
    }
    return 0;
}
float df(float x,float y){
    float z;
z=1-y;
return z;
}

float euler(float x0,float y0,float xf,int n){
    int i;
    float x,y,h,k1,k2,k3,k4;

    h=(xf-x0)/n;
    x=x0;
    y=y0;

    for(i=0;i<n;i++){

	k1=df(x,y);
	k2=df(x+h/2.0,y+h*k1/2.0);
	k3=df(x+h/2.0,y+h*k2/2.0);
	k4=df(x+h,y+h*k3);

	y+=h*(k1+2.0*k2+2.0*k3+k4)/6.0;

	x+=h;

	    }

    return y;
}
