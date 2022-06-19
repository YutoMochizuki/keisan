#include <stdio.h>
#include <math.h>
double f(double x){
    return (1.0/(1.0+x*x));
	    }
double trapezoidal(double a,double b,int n){
int i;
double sum,h;

h=(b-a)/n;
sum=(f(a)+f(b))/2.0;
    for(i=1;i<n;i++){
	sum+=f(a+i*h);
    }
sum*=h;
	
    return sum;
}


    int main(void){

	int n;
	double z,h;

	for(n=10;n<=5000;n*=2){

	    z=trapezoidal(-1.0,1.0,n);
	      z=fabs(z-1.570796);
//	    h=1.0/n;
	      printf("%d %f\n",n,z);
	}
	
	return 0;
    }

