#include <stdio.h>
#include <math.h>
float euler(float ,float ,float ,int);

int main(void){
    int n; 
    float x0,y0,xf;
    x0=0.0;
    xf=1.0;
    y0=0.0;

for(n=20;n<1000000;n=n*2){

	printf("%f %f\n",log(xf/n),log(fabs(euler(x0,y0,xf,n)-1+exp(-xf))));
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
    float x,y,h;

    h=(xf-x0)/n;
    x=x0;
    y=y0;
    for(i=0;i<n;i++){

	y+=h*df(x,y);
	x+=h;

	    }

    return y;
}
