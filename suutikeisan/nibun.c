#include <stdio.h>
#include <math.h>

double fx(double x);

int main(void){
    int d;
    int i;
    double a,b,c,eps;
    a=0.0;
    b=1.0;
    eps=0.0000001;
     d=0;

    while((b-a)>eps){
	c=(a+b)/2.0;
	d=d+1;
	if(fx(a)*fx(c)<=0.0){
	    b=c;


	}

	    else{

		a=c;

	    }
printf("%d %f\n",d,fabs(c-0.739085));
	}
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



	return 0;
    }

    double fx(double x){
	double y;
//	y=x-cos(x);
	y=exp(pow(x,4)+x*x+x)-2;
	return y;
    }




