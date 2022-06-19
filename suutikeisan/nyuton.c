#include <stdio.h>
#include <math.h>

double fx(double x);
double df(double x);

int main(void){
    int i;
    double d,x,eps;
    eps=0.0000001;
    d=0.0;
    x=1.0;
    i=0;


    do{
	d=-fx(x)/df(x);
	x+=d;
	i++;

	
	printf("%d %f\n",i,fabs(x-0.739085));

    }while(fabs(d)>eps);
    //  for(i=0;i<=d;i++){

//c=(a+b)/2.0;
//	d=d+1;
//	if(fx(a)*fx(c)<=0.0){
//	    b=c;


//	}

//	    else{

//		a=c;

//	    }

//	}

//	printf("%d\n",i);
//	printf("%.6f\n",x);
	return 0;
    }

    double fx(double x){
	double y;
	y=x-cos(x);
//	y=exp(pow(x,4)+x*x+x)-2;
	return y;
    }

double df(double x){
    double z;
    z=1+sin(x);
//     z=(4*pow(x,3)+2*x+1)*exp(pow(x,4)+x*x+x);
    return z;
}




