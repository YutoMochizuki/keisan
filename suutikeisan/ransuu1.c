#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int i,seed,n;
    double x,y,z,N,V,w,p,l;

    //   n=1000;

    seed=654768465;
    srand48(seed);
    
    for(i=1;i<=n;i++){
	x=drand48();
	y=drand48();
	z=drand48();
	w=drand48();
	p=drand48();
        l=drand48();

	if(x*x+y*y+z*z+w*w<1){
	    N++;
	    V=16*N/i;
	}
//	for(n=0;n<=1000;n++){

	printf("%d %f\n",i,V-(M_PI)*(M_PI)/2);

    }       
                                                   
    return 0;
}
