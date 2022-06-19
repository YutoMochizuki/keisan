#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    float f,g;
    double a;

    printf("整数を入力してください　\n");

    scanf("%d,&i");
    printf("i=%d\n",i); 

printf("実数を2つ入力してください");
scanf("&f&f",&f,&g) ;
printf("f=%f g=%f\n",f,g);
 
printf("実数を入力してください"); 
scanf("%lf",&a) ;
printf("a=%f\n",a);

return(0);
}
