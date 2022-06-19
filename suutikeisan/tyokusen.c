#include <stdio.h>
#include <math.h>

int main(void)
{
    
    double x0,x1,y0,y1,f,x;
    x0=0.2;
    x1=0.4;
 
    y0=exp(0.2);
    y1=exp(0.4);
 
    x=0.35;

    f=((x-x0)*y1-(x-x1)*y0)/(x1-x0);



    printf("%.6f\n",f);
   
return 0;
}
