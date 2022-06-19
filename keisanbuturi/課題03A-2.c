#include <stdio.h>
#include <math.h>

#define M 0.1//比例係数
#define DELTATFe 7.345e-3//鉄のΔt
#define DELTATAl 1.196e-3//アルミのΔt

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

    for ( i = 2; i <= 50; i++)
    {
        T[i]=Tp[i]+M*(Tp[i+1]+Tp[i-1]-2.0*Tp[i]);
        Tp[i]=T[i];

    if ((j%100)==0)
    {
                 printf("%d %f %f\n",i,j*DELTATAl,T[i]);
    }

    }
    for ( i = 51; i <= N-1; i++)
    {
        T[i]=Tp[i]+M*(Tp[i+1]+Tp[i-1]-2.0*Tp[i]);
        Tp[i]=T[i];

    if ((j%100)==0)
    {
                 printf("%d %f %f\n",i,j*DELTATFe,T[i]);
    }

    }

    }
    return 0;
}