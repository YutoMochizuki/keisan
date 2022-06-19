#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 100

int main(void){

    int i,seed;
    double r,sita,x,y;

    x=0.0;
    y=0.0;

    seed=1218103;
    srand48(seed);

    for(i=0;i<N;i++){

	r=drand48();

    sita = r*2*M_PI;

    x+=cos(sita);
    y+=sin(sita);


	printf("%f %f\n",x,y);

    }
    return 0;
}