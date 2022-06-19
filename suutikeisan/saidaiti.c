#include <stdio.h>

int maxarray(int [], int);

int main(void)
{

    int i, number[5], max;
   
    number[0]=5;
    number[1]=3;
    number[2]=10;
    number[3]=15;
    number[4]=20;

    max=maxarray(number, 5);

    printf("%d\n", max);
    
    return 0;
}

int maxarray(int array [], int narray){

    int i;
    int max;

    max=array[0];
    for(i=0; i<narray; i++){
	if(array[i]>max){
	    max=array[i];
	}}
    return(max);
}
