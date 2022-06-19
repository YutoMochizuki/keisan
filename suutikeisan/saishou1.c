#include <stdio.h>
#include <math.h>

double f(double x);

int main(void){

    double s;
    int i;
   
    double x[5],y[5];

 x[0]=1.0;
 x[1]=2.0;
 x[2]=3.0;
 x[3]=4.0;
 x[4]=5.0;

y[0]=1.0;
y[1]=4.1;
y[2]=9.3;
y[3]=16.5;
y[4]=26.0;



    for(i=0;i<5;i++){

	s+=pow((y[i]-f(x[i])),2);
	printf("%f %f %f\n",s,y[i],f(x[i]));
  }




    return 0;
}

double f(double x){
    int i,m; 
 m=3;
 double z,a[m];
    
 a[0]=-0.22;
 a[1]=0.290476;
 a[2]=0.907143;
 a[3]=0.016667;
 z=0;

    for(i=0;i<=m;i++){

	z+=a[i]*pow(x,i);

	}
    return z;
}
