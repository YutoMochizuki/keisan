#include <stdio.h>
#include <math.h>
double lagrange(double xx[],double yy[],double n,double x){
    int i,j;
    double fx,Li;
    fx=0.0;
    for(i=0;i<n;i++){
	Li=1.0;
	for(j=0;j<n;j++){
	    if(i!=j){
		Li*=(x-xx[j])/(xx[i]-xx[j]);
	    }}
	fx+=yy[i]*Li;
    }
    return fx;
}
    int main(void){
	double a[6],b[6],c,d,g;
	a[0]=0.0;
	a[1]=0.2;
	a[2]=0.4;
	a[3]=0.6;
	a[4]=0.8;
	a[5]=1.0;

	b[0]=exp(0.0);
	b[1]=exp(0.2);
	b[2]=exp(0.4);
	b[3]=exp(0.6);
	b[4]=exp(0.8);
        b[5]=exp(1.0);

	c=6.0;   //cがnの値//
	d=0.35;  //x＝の値での補間値を計算するためのx//

	g=lagrange(a,b,c,d);
	printf("%.6f\n",g);
	return 0;
    }

