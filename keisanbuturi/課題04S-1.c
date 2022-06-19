#include <stdio.h>
#include <math.h>

#define N 100//i,jのmax
#define MAX(a,b)  ((a)>(b)?(a):(b))
#define eps 0.00001//収束判定値
#define L 100.0//iの長さ

double Ukai(int ,int);//解析解

int main(void){
    
    int i,j;//iは位置xの刻み，jは位置yの刻み
    int n=0;//収束するまで繰り返す回数
    double U[N+1][N+1];//現在の電圧
    double corr;//前と後の電圧の差
    double corrmax=1.0;//収束判定に使う
    double w;//加速パラメーター

    for (i = 0; i <= N; i++)
    {
        U[i][N]=100.0;
        for ( j = 0; j <=N-1; j++)
        {
            U[i][j]=0.0;
        }
    }

//    w=2.0/(1.0+sin(M_PI/N));//wopt
//    w=1.2;
//    w=1.4;
//    w=1.6;
    w=1.8;

    while (corrmax > eps)
    {

        n++;

    corrmax=0.0;

for (j = 1; j <= N-1; j++)
{

    for ( i = 1; i <= N-1; i++)
    {
        corr=(1-w)*U[i][j]+w*(U[i+1][j]+U[i-1][j]+U[i][j+1]+U[i][j-1])/4.0-U[i][j];
        U[i][j]+=corr;
        corrmax=MAX(fabs(corr),corrmax);

    }

}

    }

//    printf("%d %d %f\n",i,j,Ukai(i,j));
    j=10;
    i=10;
    printf("%d %d %f\n",i,j,fabs(U[i][j]-Ukai(i,j)));

    j=50;
    i=50;
    printf("%d %d %f\n",i,j,fabs(U[i][j]-Ukai(i,j)));

    j=90;
    i=90;
    printf("%d %d %f\n",i,j,fabs(U[i][j]-Ukai(i,j)));

    return 0;
}

double Ukai(int j ,int i)
    {
    double Uk[N+1][N+1];//解析解の初期温度
    int n;//解析解の和の個数

    Uk[i][j]=0.0;

for ( n = 1; n <=47; n+=2){

Uk[i][j]+=(400.0/(n*M_PI))*sin((n*M_PI/L)*i)*(exp(n*M_PI*(j/L-1.0))-exp(-n*M_PI*(j/L+1.0)))/(1-exp(-2.0*n*M_PI));
}

    return Uk[i][j];
    }