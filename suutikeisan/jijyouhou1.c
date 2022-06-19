#include <stdio.h>
#include <math.h>

int main(void){
    int i,n;
    double x[5],y[5],S;

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

    n=4;

    for(i=0;i<=n;i++){
	S+=(y[i]-f(x[i]))*(y[i]-f(x[i]));

