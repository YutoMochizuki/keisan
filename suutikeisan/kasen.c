#include <stdio.h>
#include <math.h>

double fx(double x);

int main(void){
    int i;
    double d,x0,eps,x1;
    eps=0.0000001;
    d=0.0;
    x0=1.0;
    // x1=6/7+2/(7*exp(3));
    x1=(sin(1)+cos(1))/(1+sin(1));
    i=0;


    do{
	d=-fx(x1)*(x1-x0)/(fx(x1)-fx(x0));
	x0=x1;
	x1+=d;
	i++;


	printf("%d %f\n",i,fabs(x1-0.739085));

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


