#include <stdio.h>
#include <math.h>
double euler(double ,double ,double ,int);

int main(void){
    int n; 
    double x0,y0,xf;
    x0=0.0;//t
    xf=-1.0;
    y0=1.0;//a
    n=1000; 
    //ハッブルパラメータに一年の時間をかける

    euler(x0,y0,xf,n);

    return 0;
}
double df(double x,double y){
    double z;
    double o;//omega
    o=0.26;
z=sqrt(o/y+(1-o)*y*y);//微分方程式
return z;
}

double euler(double x0,double y0,double xf,int n){
    int i;
    double x,y,h,k1,k2,k3,k4,H;
    H=2.33e-18*365*24*60*60;
    //ハッブルパラメータに一年の時間をかける

    h=(xf-x0)/n;
    x=x0;
    y=y0;

    printf("%.10f %.10f \n",x0,y0);

    for(i=0;i<n;i++){

	k1=df(x,y);
	k2=df(x+h/2.0,y+h*k1/2.0);
	k3=df(x+h/2.0,y+h*k2/2.0);
	k4=df(x+h,y+h*k3);

	y+=h*(k1+2.0*k2+2.0*k3+k4)/6.0;

	x+=h;

if(y>=0){
    printf("%.10f %.10f \n",x/H,y);
    }
	    }

    return y;

    //課題01のS課題は負の時間から現在までと，現在から未来のデータを別々のプログラムで出力し，
    //その２つの結果をdatファイルで結合し，gnuplotでplotしました．
    //このプログラムは誕生から現在までのプログラムです．
}