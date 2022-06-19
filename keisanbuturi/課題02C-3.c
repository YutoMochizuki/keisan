#include <stdio.h>
#include <math.h>

#define G 9.80665
#define MASS 1.0
#define L 1.0

void rk42(double ,double ,double[] ,int);

int main(void){
    int n; 
    double t0,y[2],tf,y10,y20,K0,U0,E0;
    t0=0.0;//時間の初期値
    tf=100.0;//時間の終わり値
    y10=M_PI/4.0;//シータの初期値
    y20=0.0;//シータの微分の初期値
    n=100000;

    y[0]=y10;
    y[1]=y20;

    K0=0.0;
    U0=MASS*G*(1-sqrt(1.0/2.0));
    E0=MASS*G*(1-sqrt(1.0/2.0));

    //printf("%.10f %.10f\n",t0,E0);

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
z=-G/L*sin(y1);//題意の微分方程式
return z;
}

void rk42(double t0,double tf,double y[] ,int n){
    int i;
    double t,h,k1,k2,k3,k4,l1,l2,l3,l4,K,U,E,E0;

    E0=MASS*G*(1-sqrt(1.0/2.0));

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

    K=MASS*y[1]*y[1]/2.0; //運動エネルギー
    U=MASS*G*L*(1-cos(y[0])); //ポテンシャル
    E=K+U;//全エネルギー

    printf("%.10f %.10f\n",t,E-E0);

	    }
}