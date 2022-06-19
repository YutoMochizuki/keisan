#include <stdio.h>
#include <math.h>

#define ndatamax 100
#define nmax 100

int main(void)
{
  int n,nc,i;
  double xdata[ndatamax];//第一項
  double ydata[ndatamax];//第二項
  double zdata[ndatamax];//第三項
  double delta[ndatamax],x[ndatamax];//誤差と時間差の中点
  double A,B,C,X,Y;//行列要素
  double a,b,deltaa,deltab,Delta,kai2;
  FILE *fp;
  char filename[nmax];

  printf("filename?\n");
  scanf("%s",filename);
  fp=fopen(filename,"r");
  i=0;
  n=0;

  if (fp==NULL) {
    printf("ファイルが見つかりません。\n");
    return 0;
  }

    while ( ! feof(fp) && n < nmax){//ファイルが終わりではないかつ配列を超えない
        fscanf(fp, "%lf %lf %lf",&(xdata[n]),&ydata[n],&zdata[n]);
        n++;
    }

    for(i=0;i<n;i++){

    delta[i]=sqrt(zdata[i])*fabs(1/zdata[i]);
    x[i]=(xdata[i]+ydata[i])/2.0;

  A+=x[i]*x[i]/delta[i]/delta[i];
  B+=x[i]/delta[i]/delta[i];
  C+=1/delta[i]/delta[i];

  X+=log(zdata[i])*x[i]/delta[i]/delta[i];
  Y+=log(zdata[i])/delta[i]/delta[i];

}

b=(B*X-A*Y)/(B*B-A*C);
a=(C*X-B*Y)/(C*A-B*B);

Delta=A*C-(B*B);
deltaa=sqrt(C/Delta);
deltab=sqrt(A/Delta);


for(i=0;i<n;i++){

kai2+=(log(zdata[i])-a*x[i]-b)*(log(zdata[i])-a*x[i]-b)/(delta[i]*delta[i]);

}

printf("%f %f %f %f %f\n",a,b,deltaa,deltab,kai2);

  fclose(fp);
  return 0;
} 
