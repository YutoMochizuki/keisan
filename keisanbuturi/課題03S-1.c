#include <stdio.h>
#include <math.h>

#define M 0.1//比例係数
#define DELTATFe 7.345e-3//Δt
#define T0 100.0//初期温度
#define L 10.0//棒の長さ

double Tkai(int ,int);//解析解

int main(void){
    int N=100,i,j;//Nは位置xの長さ[mm],iは位置xの刻み，jは時間tの刻み
    double T[N],Tp[N];//Tが現在の温度，Tpが前の時間の温度
    

    Tp[0]=0.0;
    Tp[1]=0.0;

    for (i = 2; i <= N-1; i++)
    {
        Tp[i]=100.0;//棒の初期温度
    }

    Tp[N]=0.0;

for (j = 0; j <= 10000; j++)
{

    for ( i = 2; i <= N-1; i++)
    {
        T[i]=Tp[i]+M*(Tp[i+1]+Tp[i-1]-2.0*Tp[i]);
        Tp[i]=T[i];

   if (j==3000)
    {
    if(i==50)
        {

         printf("%f %f %.10f\n",i*0.1,j*DELTATFe,fabs(T[i]-Tkai(j,i)));

        }

    }

    }
}

    return 0;
}

double Tkai(int j ,int i)
    {
    double Tk;//解析解の初期温度
    int n;//解析解の和の個数

    Tk=0.0;

for ( n = 1; n <=11; n+=2){

Tk+=(4.0*T0/(n*M_PI))*sin((n*M_PI/L)*i*0.10)*exp(-(n*M_PI/L)*(n*M_PI/L)*0.12/7.8/0.113*j*DELTATFe);

}

    return Tk;
    }