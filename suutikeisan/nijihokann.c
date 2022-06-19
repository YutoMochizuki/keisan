#include <stdio.h>
#include <math.h>

int main(void)
{
    
    double x0,x1,x2,y0,y1,y2,f,x;
    x0=0.2;
    x1=0.4;
    x2=0.6;
    y0=exp(0.2);
    y1=exp(0.4);
    y2=exp(0.6);
    x=0.35;

    f=y0*(x-x1)*(x-x2)/((x0-x1)*(x0-x2))+y1*(x-x0)*(x-x2)/((x1-x0)*(x1-x2))+y2*(x-x0)*(x-x1)/((x2-x0)*(x2-x1));


    
    printf("%.6f\n",f);
   
return 0;
}

