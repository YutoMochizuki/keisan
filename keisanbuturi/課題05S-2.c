#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//三次元

#define N 10

int main(void){

    int i,j,seed;
    double r,sita,x,y,z,R,average,sum2,sum,sigma;

    seed=1218103;
    srand48(seed);

for(j=0;j<N;j++){

    x=0.0;
    y=0.0;
    z=0.0;


    for(i=0;i<N;i++){

	r=drand48();

    if (r<(1.0/6.0)) x++;
    else if (((1.0/6.0)<=r) && (r<(2.0/6.0))) x--;
    else if (((2.0/6.0)<=r) && (r<(3.0/6.0))) y++;
    else if (((3.0/6.0)<=r) && (r<(4.0/6.0))) y--;
    else if (((4.0/6.0)<=r) && (r<(5.0/6.0))) z++;
    else z--;

    }

    R=sqrt(x*x+y*y+z*z);
    sum+=R;//Rの合計
    sum2+=R*R;//Rの二乗の和
}
average = sum/N;//Rの平均値

sigma = sqrt(sum2/N-average*average);//分散

printf("%d %f %f %f\n",N,average,sigma,fabs(average-sqrt(N)));

    return 0;
}