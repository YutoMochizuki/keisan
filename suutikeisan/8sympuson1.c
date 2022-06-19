#include <stdio.h>
#include <math.h>
double f(double x){
    return (1.0/(x*x));
	    }
double sympson8 (double a,double b,int n){
    int i,j;
double sum,h;

h=(b-a)/(3.0*n);
sum=f(a)+f(b);
    for(i=1;i<n;i++){
    sum+=2.0*f(a+3.0*i*h);
}

for(j=1;j<n+1;j++){
    sum+=3.0*(f(a+(3.0*j-1)*h)+f(a+(3.0*j-2)*h));
}
sum*=3.0*h/8.0;
	
    return sum;
}


    int main(void){

	int n;
double z,h;
	for(n=2;n<=1024;n*=2){

	z=sympson8(1.0,2.0,n);
	z=fabs(z-0.5);
	h=1.0/n;
	
	printf("%d %.10f %f %f\n",n,z,h*h,pow(h,4));
	}
	return 0;
    }

