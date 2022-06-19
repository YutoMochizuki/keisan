#include <stdio.h>
#include <math.h>
double f(double x){
    return (4.0/(1+x*x));
	    }
double sympson3 (double a,double b,int n){
    int i,j;
double sum,h;

h=(b-a)/(2.0*n);
sum=f(a)+f(b);
    for(i=1;i<n;i++){
    sum+=2.0*f(a+2.0*i*h);
}

for(j=1;j<n+1;j++){
 sum+=4.0*f(a+(2.0*j-1)*h);
}
sum*=h/3.0;
	
    return sum;
}


    int main(void){

	int n=100;
	double z;
	z=sympson3(0.0,1.0,n);
	
	
	printf("%.10f\n",z);
	
	return 0;
    }

