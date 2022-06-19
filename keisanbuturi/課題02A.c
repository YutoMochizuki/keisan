#include <stdio.h>
#include <math.h>

#define B 2.5985
#define EPS_BH 1.0e-5
#define EPS_TURN 1.0e-7
#define rg 1.0

void rk42(double ,double ,double[] ,int,double);

int main(void){
    int n; 
    double t0,y[2],tf,y10,y20,FUGOU;
    t0=0.0;//時間の初期値
    tf=1.0;//時間の終わり値
    y10=5.0;//X1の初期値
    y20=asin(B/y10);//X2の初期値
    n=100000;
    FUGOU=-1.0; //X1の微分方程式の符号

    y[0]=y10;
    y[1]=y20;

    printf("%f %f\n",y[0]*cos(y[1]),y[0]*sin(y[1]));

    rk42(t0 ,tf ,y ,n,FUGOU); //数値解
    
    return 0;
}
double df1(double t,double y1,double y2,double FUGOU){
    double z;

z=FUGOU*(1.0-1.0/y1)*sqrt(1.0-B*B/(y1*y1)+B*B/(y1*y1*y1));//rの微分方程式
return z;
}

double df2(double t,double y1,double y2){
    double z;
    
z=(1.0-1.0/y1)*B/(y1*y1);//φの微分方程式
return z;
}

void rk42(double t0,double tf,double y[] ,int n ,double FUGOU){
    int i;
    double t,h,k1,k2,k3,k4,l1,l2,l3,l4,y10,b1,b2,X,Y;

    t=t0;
    y10=y[0];//X1の初期値

    for(i=0;i<n;i++){
    h=0.1*sqrt((y[0]*y[0]*y[0]-B*B*(y[0]-1.0))/(y[0]*y[0]*y[0]));

	k1=df1(t,y[0],y[1],FUGOU);
    l1=df2(t,y[0],y[1]);

	k2=df1(t+h/2.0,y[0]+h*k1/2.0,y[1]+h*l1/2.0,FUGOU);
    l2=df2(t+h/2.0,y[0]+h*k1/2.0,y[1]+h*l1/2.0);

	k3=df1(t+h/2.0,y[0]+h*k2/2.0,y[1]+h*l2/2.0,FUGOU);
    l3=df2(t+h/2.0,y[0]+h*k2/2.0,y[1]+h*l2/2.0);

	k4=df1(t+h,y[0]+h*k3,y[1]+h*l3,FUGOU);
    l4=df2(t+h,y[0]+h*k3,y[1]+h*l3);

    b1=y[0];

	y[0]+=h*(k1+2.0*k2+2.0*k3+k4)/6.0; //X1
    y[1]+=h*(l1+2.0*l2+2.0*l3+l4)/6.0; //X2

	t=t0+(i+1)*h;

    if(y[0]<1.0+EPS_BH)break;
    if(y[0]>y10)break;

    b2=y[0];

    if(fabs(b1-b2)<EPS_TURN)FUGOU=1.0;

    X=y[0]*cos(y[1]);
    Y=y[0]*sin(y[1]);

    printf("%f %f\n",X,Y);
	    }
}