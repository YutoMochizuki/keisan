#include <stdio.h>
#include <math.h>
double menseki(double r)
{
    double s;
	       s=r*r*M_PI;
	       return s;
}
int main(void){

    double a,d;
    scanf("%lf",&a);
    d=menseki(a);
    printf("%f\n",d);
    
    return 0;
}



