#include <stdio.h>
#include <math.h>

 
#define N 100
#define eps 0.0001
#define MAX(a,b) ((a)>(b)?(a):(b))

int main(void){
  double U[N+1][N+1],corrmax=0.0,corr=0.0;
  int i=0,j=0,n=0;
 
  for(i=0;i<=N;i++){
     U[i][N]=100.0;
    for(j=0;j<=N-1;j++){
      U[i][j]=0.0;
    }
  }
  corrmax=1.0;
  
  while(corrmax>eps){
    corrmax=0.0;
   for(i=1;i<=N-1;i++){
    for(j=1;j<=N-1;j++){
      
      corr=(1.0/4.0)*(U[i+1][j]+U[i-1][j]+U[i][j+1]+U[i][j-1])-U[i][j];
        U[i][j]=U[i][j]+corr;
       corrmax=MAX(fabs(corr),corrmax);
    }
   }
   printf("%d %f %f %f %f\n",n,U[10][10],U[50][10],U[50][50],U[80][80]);
       
    
  }

  return(0);
}
  
    
