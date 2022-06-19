#include <stdio.h>

int main(void)
{
    int i,j;
    double a,b,c;
    i=1;
    j=99;
    a=1.02;
    b=1.0e8;
    c=380000.0;

    printf("printfの練習\n");
    printf("%d %d \n",i,j);
    printf("i=%d j=%d\n",i,j);
    printf("i=%2d j=%3d\n",i,j);
    printf("%f| |%.2f| |%10.2f\n",a,b,c);
printf("%e| |%.2e| |%10.2e\n",a,b,c);
printf("\\ \' \" %%\n");

return(0);
}
