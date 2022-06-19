#include <stdio.h>
#include <math.h>

int main(void)
{

    int a,b;
    double x,y;

    printf("nyuuryoku \n");
    scanf("%d %d", &a,&b);
    x=(-a+sqrt(a*a-4.0*b))/2.0;
    y=2.0*b/(-a-sqrt(a*a-4.0*b));
    printf("%.100f \n",x);
    printf("%.100f \n",y);

    return 0;
}
