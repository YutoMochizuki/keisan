#include <stdio.h>
#include <math.h>
double f(double x){
    return (1.0/(1+x*x));
	    }

double df(dauble x){
    double z,e;
    e=0.00000001;
    z=(f(x+e)-f(x-e))/2e;

    return z;
}



double trapezoidal(double a,double b,int n){
int i;
double sum,h;

h=(b-a)/n;
sum=(f(a)+f(b))/2.0+(df(a)-df(b))*h*h/12.0;
    for(i=1;i<n;i++){
	sum+=f(a+i*h);
    }
sum*=h;
	
    return sum;
}


    int main(void){

	int n=10;
	double z;
	z=trapezoidal(-1.0,1.0,n);
	
	
	printf("%.12f\n",z);
	
	return 0;
    }

