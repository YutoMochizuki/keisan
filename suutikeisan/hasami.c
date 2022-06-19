#include <stdio.h>
#include <math.h>

double fx(double x);

int main(void){
    int d;
    int i;
    double a,b,c,eps;
    a=0.0;
    b=1.0; /*fx(b)が発散せずに有限な値をもつことが必要.
	特に急激な増加関数など，線形と逸脱している場合は二分法やその他の方法を推奨*/
    eps=0.0000001;
     d=0;

     for(i=0;i<=100;i++){

    c=(a*fx(b)-b*fx(a))/(fx(b)-fx(a));
	d=d+1;
	if(fx(a)*fx(c)<=0.0){
	    b=c;


	}

	    else{

		a=c;

	    }

	printf("%d %f\n",d,fabs(c-0.739085));
	}


	return 0;
    }

    double fx(double x){
	double y;
//	y=x-cos(x);
	y=exp(pow(x,4)+x*x+x)-2;
	return y;
    }




