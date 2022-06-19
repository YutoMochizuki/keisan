#include <stdio.h>
#include <math.h>

int irand(int ir);

int main(void){
    int r0,n,x,y;

r0=1;

for(n=0;n<256;n++){
    x=r0;
    r0=irand(r0);
    y=r0;
    
    printf("%d %d\n",x,y);

}
    return 0;
}

int irand(int ir){
    int a,c,m,z;
    a=12869;
    c=6925;
    m=32768;

    z=(a*ir+c)%m;

    return z;
}
