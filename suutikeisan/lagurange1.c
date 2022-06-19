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
	int u;
	double a[3],b[3],c,d,g;
	a[0]=0.0;
	a[1]=2.0;
	a[2]=4.0;
	

	b[0]=sin(0.0)+0.0;
	b[1]=sin(2.0)+2.0;
	b[2]=sin(4.0)+4.0;


	c=3.0;
	for(d=0.0;d<=5.2;d+=0.2){

	g=lagrange(a,b,c,d);
	printf("%f %f\n",d,g);
	    }
	return 0;
    }

