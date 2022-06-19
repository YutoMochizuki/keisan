#include <stdio.h>
#include <math.h>
void rk42(double ,double ,double[] ,int);

int main(void){
    int n;
    double t0,y[2],tf,y10,y20;
    t0=0.0;//時間の初期値
    tf=10.0;//時間の終わり値
    y10=M_PI/4;//シータの初期値
    y20=0.0;//シータの微分の初期値
    n=10000;

//for(y10=0;y10<=M_PI;y10+=M_PI/10.0){
//    y[0]=y10;
//}

    y[0]=y10;
    y[1]=y20;
//    printf("%f %f\n",t0,y[0]);

    rk42(t0 ,tf ,y ,n); //数値解

    return 0;
}
double df1(double t,double y1,double y2){
    double z;
z=y2;//微分方程式y1の微分=y2
return z;
}

double df2(double t,double y1,double y2){
    double z;
    double l=1.0,g=9.8;
z=-g/l*sin(y1);//題意の微分方程式
return z;
}

void rk42(double t0,double tf,double y[] ,int n){
    int i;
    double t,h,k1,k2,k3,k4,l1,l2,l3,l4,T,y10;

    y10=y[0];

    h=(tf-t0)/n;
    t=t0;

    for(i=0;i<n;i++){

	k1=df1(t,y[0],y[1]);
    l1=df2(t,y[0],y[1]);

	k2=df1(t+h/2.0,y[0]+h*k1/2.0,y[1]+h*l1/2.0);
    l2=df2(t+h/2.0,y[0]+h*k1/2.0,y[1]+h*l1/2.0);

	k3=df1(t+h/2.0,y[0]+h*k2/2.0,y[1]+h*l2/2.0);
    l3=df2(t+h/2.0,y[0]+h*k2/2.0,y[1]+h*l2/2.0);

	k4=df1(t+h,y[0]+h*k3,y[1]+h*l3);
    l4=df2(t+h,y[0]+h*k3,y[1]+h*l3);


	y[0]+=h*(k1+2.0*k2+2.0*k3+k4)/6.0; //sita
    y[1]+=h*(l1+2.0*l2+2.0*l3+l4)/6.0; //sitaの時間微分

	t=t0+(i+1)*h;
    

    if(y[0]<=0)break;

//    printf("%f %f\n",t,y[0]);

    
	    }
        T=t*4;
        printf("%f %f\n",y10,T);

}
