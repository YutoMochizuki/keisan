#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int i,j,seed;
    double r,sita,x,y,R,average,sum2,sum,sigma,N;

    seed=1218103;
    srand48(seed);
    for(N=10.0;N<=10000.0;N+=10.0){

for(j=0;j<N;j++){

    x=0.0;
    y=0.0;

    for(i=0;i<N;i++){

	r=drand48();

    if (r<0.25) x++;
    else if ((0.25<=r) && (r<0.5)) x--;
    else if ((0.5<=r) && (r<0.75)) y++;
    else y--;

//	printf("%f %f\n",x,y);

    }

    R=sqrt(x*x+y*y);
    sum+=R;//Rの合計
    sum2+=R*R;//Rの二乗の和
}
average = sum/N;//Rの平均値

sigma = sqrt(sum2/N-average*average);//分散

printf("%f %f %f\n",N,average,sigma);

    }

    return 0;
}