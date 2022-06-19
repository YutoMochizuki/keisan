#include <stdio.h>
#include <math.h>

void printmatrix(double [][21], int);
void gaussjordon(double [][21], int);

int main(void){

    double a[20][21];
    int i,j,n;
    n=7;

 a[0][0]=7.0;

for(i=n;i<2*n;i++){
for(j=0;j<n;j++){

    a[j][i]=0.0;
   
}
}
for(i=0;i<n;i++){

    a[i][i+7]=1.0;
 
}



for(i=0;i<n;i++){

    a[6][i]=1.0;
    a[i][6]=1.0;
}

for(i=0;i<n-1;i++){

    a[5][i]=2.0;
    a[i][5]=2.0;
}
for(i=0;i<n-2;i++){

    a[4][i]=3.0;
    a[i][4]=3.0;
}
for(i=0;i<n-3;i++){

    a[3][i]=4.0;
    a[i][3]=4.0;
}
for(i=0;i<n-4;i++){

    a[2][i]=5.0;
    a[i][2]=5.0;
}
for(i=0;i<n-5;i++){

    a[1][i]=6.0;
    a[i][1]=6.0;
}
    gaussjordon(a,n);
    printmatrix(a,n);

    return 0;
}

void printmatrix(double a[20][21], int n){
    int i,j;

    for(i=0;i<n;i++){
	for(j=0;j<2*n;j++){

	    printf("%f ",a[i][j]);
	}
	printf("\n");
    }
	printf("\n");
    }

void gaussjordon(double a[20][21], int n){

     int i,j,k;
     double w1,w2;

     for(k=0;k<n;k++){
     printmatrix(a,n);
     w1=a[k][k];
     for(j=k;j<=2*n;j++){
	 a[k][j]=a[k][j]/w1;
     }
for(i=0;i<=n;i++){
    w2=a[i][k];
    if(i!=k){
	for(j=k;j<=2*n;j++){
	    a[i][j]=a[i][j]-w2*a[k][j];
	}
    }
}
     }
 }


