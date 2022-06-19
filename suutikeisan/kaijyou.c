#include <stdio.h>

int kaijou(int n)
{
    int a,b;
    b=1;
for(a=1;a<=n;a++){
       
	b=b*a;
}
	return b;
}
int main(void){

    int n,x;
    scanf("%d",&n);
    x=kaijou(n);

	printf("%d\n",x);

    return 0;
}



