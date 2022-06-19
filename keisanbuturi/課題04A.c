#include <stdio.h>
#include <math.h>

#define N 100//i,jのmax
#define MAX(a,b)  ((a)>(b)?(a):(b))
#define eps 0.00001//収束判定値

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

    printf("%d %f %f %f\n",n,U[10][10],U[50][50],U[80][80]);
    }

    return 0;
}