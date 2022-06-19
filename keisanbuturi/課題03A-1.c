#include <stdio.h>
#include <math.h>

#define M 0.1//比例係数
#define DELTAT 7.345e-3//Δt

int main(void){
    int N=100,i,j;//Nは位置xの長さ[mm],iは位置xの刻み，jは時間tの刻み
    double T[N],Tp[N];//Tが現在の温度，Tpが前の時間の温度
    double w=0.0;//振動数

    Tp[0]=0.0;
    Tp[1]=0.0;

    for (i = 2; i <= N-1; i++)
    {
        Tp[i]=100.0;//棒の初期温度
    }
    
//    Tp[N]=50.0*sin(w*j);

for (j = 0; j <= 10000; j++)
{
    Tp[N]=50.0*sin(w*j*DELTAT*M_PI/180.0);

    for ( i = 2; i <= N-1; i++)
    {
//        Tp[N]=50.0*sin(w*j*DELTAT);
        T[i]=Tp[i]+M*(Tp[i+1]+Tp[i-1]-2.0*Tp[i]);
        Tp[i]=T[i];

    if ((j%100)==0)
    {
//        if(i==50){
//               printf("%d %f\n",j,T[i]);
                 printf("%d %f %f\n",i,j*DELTAT,T[i]);
//        }
    }
    
//       printf("%d %f\n",j,T[i]);//あるxでの温度変化を横軸t
    }

    }
    return 0;
}