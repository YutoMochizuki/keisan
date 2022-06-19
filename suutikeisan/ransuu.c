#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int i,seed,n;
    double x,y,z,N,V;

    n=1000;

    seed=654768465;
    srand48(seed);

    for(i=1;i<=n;i++){
	x=drand48();
	y=drand48();
	z=drand48();
	if(x*x+y*y+z*z<1){
	    N++;
	    V=8*N/n;
	}


	printf("%d %f\n",i,V-4*M_PI/3);

    }                                                       
    return 0;
}
