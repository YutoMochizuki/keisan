#include <stdio.h>
#include <math.h>

#define TD 428.0//デバイ温度
#define R 8.314462618//気体定数

double f(double x){
	double m,g,l;
	///(4.0*sinh(x/2.0)*sinh(x/2.0))
	g=x*x*x*x;
	m=g/((exp(x/2.0)-exp(-x/2.0))*(exp(x/2.0)-exp(-x/2.0)));

    return m;
	    }
double sympson8(double a,double b,int n){
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
	double z;
	int T;
	double t,v;
	n=100;

//T=270;
    for ( T = 1; T <=1000; T+=1)
	{
	v=9.0*R*(T/TD)*(T/TD)*(T/TD);
    t=TD/T;
		z=v*sympson8(0.00000000001,t,n);

        printf("%d %f\n",T,z);
//		printf("%f %f\n",t,z);
	}

	return 0;
    }

