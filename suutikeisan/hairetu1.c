#include <stdio.h>
#include <math.h>
int main(void){

    int a,number[4],b;
    number[0]=0;
    number[1]=2;
    number[2]=4;
    number[3]=6;

    for(a=0;a<4;a++){
	b+=number[a];
    printf("%d\n",b);
    }
    return 0;
}



