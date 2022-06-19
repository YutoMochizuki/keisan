#include <stdio.h>
#include <math.h>
float f(float x){
    return (1.0/(x*x));
	    }
float trapezoidal(float a,float b,int n){
int i;
float sum,h;

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
	float z,h;

	for(n=2;n<=1024;n*=2){

	    z=trapezoidal(1.0,2.0,n);
	    z=fabs(z-0.50);
	    h=1.0/n;
	    printf("%d %.10f %f %f\n",n,z,h*h,pow(h,4));
	}
	
	return 0;
    }

