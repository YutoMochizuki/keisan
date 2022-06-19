#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//一次元

#define N 10

int main(void){

    int i,j,seed;
    double r,sita,x,y,R,average,sum2,sum,sigma;

    seed=1218103;
    srand48(seed);

for(j=0;j<N;j++){

    x=0.0;
    y=0.0;

    for(i=0;i<N;i++){

	r=drand48();

    if (r<0.25) x++;
    else if ((0.25<=r) && (r<0.5)) x--;
    else if ((0.5<=r) && (r<0.75)) x++;
    else x--;

//	printf("%f %f\n",x,y);

    }

    R=sqrt(x*x);
    sum+=R;//Rの合計
    sum2+=R*R;//Rの二乗の和
}
average = sum/N;//Rの平均値

sigma = sqrt(sum2/N-average*average);//分散

printf("%d %f %f %f\n",N,average,sigma,fabs(average-sqrt(N)));

    return 0;
}