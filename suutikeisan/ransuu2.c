#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i,seed;
    double r,y;

    seed=654768465;
    srand48(seed);

    for(i=0;i<256;i++){
	r=drand48();
	printf("%f %f\n",r,y);
y=drand48();
    }
    return 0;
}
