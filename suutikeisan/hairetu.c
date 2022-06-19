#include <stdio.h>

int main(void)
{
    int i,j;
    int data2[2][3];
    double data3[2][3]={{1.0,2.0,3.0},{4.0,5.0,6.0}};

    for(i=0; i<2; i++){
	for(j=0; j<3; j++){
	    data2[i][j]=i*j;
	    printf("%2d %2d %2d %4.1f\n",i,j,data2[i][j],data3[i][j]);
	}}
    return 0;
}
