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
	
	double a[11],b[11],c,g,u;
	a[0]=0.00;
	a[1]=0.20;
	a[2]=0.40;
	a[3]=0.60;
        a[4]=0.80;
        a[5]=1.0;
        a[6]=1.20;
        a[7]=1.40;
        a[8]=1.60;
        a[9]=1.80;
	a[10]=2.00;

        b[0]=-1.59;
	b[1]=-1.03;
	b[2]=-0.63;
	b[3]=-0.35;
        b[4]=-0.16;
        b[5]=0.00;
        b[6]=0.16;
        b[7]=0.35;
        b[8]=0.63;
        b[9]=1.03;
	b[10]=1.59;

	


	c=11;
	for(u=0.0;u<=2.01;u+=0.02){

	g=lagrange(a,b,c,u);
	printf("%f %f\n",u,g);
	}
	return 0;
    }

