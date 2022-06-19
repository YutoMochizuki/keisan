#include <stdio.h>
#include <math.h>

void printmatrix(double [][11], int);
void gaussjordon(double [][11], int);

int main(void){

    double a[10][11];
    int i,j,n;
    n=3;

 a[0][0]=4.0;
 a[0][1]=3.0;
 a[0][2]=2.0;
 a[0][3]=11.0;

 a[1][0]=1.0;
 a[1][1]=-1.0;
 a[1][2]=1.0;
 a[1][3]=-3.0;

 a[2][0]=2.0;
 a[2][1]=3.0;
 a[2][2]=-1.0;
 a[2][3]=12.0;

    gaussjordon(a,n);
    printmatrix(a,n);

    return 0;
}

void printmatrix(double a[10][11], int n){
    int i,j;

    for(i=0;i<n;i++){
	for(j=0;j<n+1;j++){

	    printf("%f ",a[i][j]);
	}
	printf("\n");
    }
	printf("\n");
    }

void gaussjordon(double a[10][11], int n){

     int i,j,k;
     double w1,w2;

     for(k=0;k<n;k++){
     printmatrix(a,n);
     w1=a[k][k];
     for(j=k;j<=n;j++){
	 a[k][j]=a[k][j]/w1;
     }
for(i=0;i<=n;i++){
    w2=a[i][k];
    if(i!=k){
	for(j=k;j<=n;j++){
	    a[i][j]=a[i][j]-w2*a[k][j];
	}
    }
}
     }
 }


