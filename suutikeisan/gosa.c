#include <stdio.h>
#include <math.h>

int main(void){

    double a,e;
    e=1.0;

    do{
	e=e*0.5;
	a=1.0+e;

 printf("%.20f %.20e\n",a,e);

//マシンイプシロンは最後から一個前の値//

    }while(a>1.0);


    return 0;
}


