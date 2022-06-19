#include <stdio.h>
#include <math.h>

int irand(int ir);

int main(void){
    int r0,n,x,y;

r0=10;

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
    a=57;
    c=1;
    m=256;

    z=(a*ir+c)%m;

    return z;
}
