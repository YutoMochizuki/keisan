#include <stdio.h>
#include <math.h>

void printmatrix(double [][101], int);
void gaussjordon(double [][101], int);



int main(void){

    double a[100][101],s[100][101],l;
    int i,j,n,u,v,k;
    n=4;
    double x[100],y[100];

    x[0]=0;
    x[1]=0.25;
    x[2]=0.5;
    x[3]=0.75;
    x[4]=1.0;
    x[5]=1.25 ;
    x[6]=1.5;
    x[7]=1.75;
    x[8]=2.0;
    x[9]=2.25;
    x[10]=2.5;
    x[11]=2.75;
    x[12]=3.0;
    x[13]=3.25;
    x[14]=3.5;
    x[15]=3.75;
    x[16]=4.0;
    x[17]=4.25;
    x[18]=4.5;
    x[19]=4.75;






    y[0]=1.11889;
    y[1]=0.926783;
    y[2]=1.04791;
    y[3]=0.607354;
    y[4]=0.792769;
    y[5]=0.627988;
    y[6]=1.03031;
    y[7]=0.868015;
    y[8]=1.24249;
    y[9]=1.35718;
    y[10]=1.80848;
    y[11]=2.27712;
    y[12]=2.95505;
    y[13]=3.16388;
    y[14]=4.07159;
    y[15]=4.39143;
    y[16]=5.3159;
    y[17]=6.06679;
    y[18]=6.79108;
    y[19]=7.58348;


    for(j=0;j<n;j++){
for(k=0;k<n;k++){
    a[j][k]=2*(n-1)-j-k;

for(i=0;i<=4;i++){

    s[j][k]+=pow(x[i],a[j][k]);
}}}


for(i=0;i<=4;i++){
    for(u=0;u<n;u++){
 for(v=n-1;v>=0;v--){

     s[u][n]+=y[i]*pow(x[i],v);


}}}

    gaussjordon(s,n);
    printmatrix(s,n);


    return 0;
}

void printmatrix(double a[100][101], int n){
    int i,j;

    for(i=0;i<n;i++){
	for(j=0;j<n+1;j++){

	    printf("%f ",a[i][j]);
	}
	printf("\n");
    }
	printf("\n");
    }

void gaussjordon(double a[100][101], int n){

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

