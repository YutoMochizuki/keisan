#include <stdio.h>
#include <math.h>

double a(double,double,double);
double b(double,double,double);

#define ndatamax 100
#define nmax 100

int main(void)
{
  int n,nc,i;
  double xdata[ndatamax];
  double ydata[ndatamax];
  double zdata[ndatamax];
  double delta[ndatamax],x[ndatamax];//誤差と時間差の中点
  double A,B,C,X,Y;//行列要素
  double a,b,deltaa,deltab,Delta,kai2;
  double damy1,damy2,ldata[ndatamax];
  FILE *fp;
  char s[nmax];
  char filename[nmax];

  printf("filename?\n");
  scanf("%s",filename);
  fp=fopen(filename,"r");
  i=0;

    while (fgets(s,nmax,fp)!=NULL){
    
    nc=sscanf(s,"%lf %lf %lf",&xdata[i],&ydata[i],&zdata[i]);

    if (nc==2)
    {
        i++;
    }

//    ldata[i]=zdata[i];

    delta[i]=sqrt(zdata[i])*fabs(1/zdata[i]);
    x[i]=(xdata[i]+ydata[i])/2.0;

//    printf("%f %f %f %f\n",x[i],log(zdata[i]),log(zdata[i])+delta[i],log(zdata[i])-delta[i]);

//for ( l = 0; l < nmax; l++)
//{
  A+=x[i]*x[i]/delta[i]/delta[i];
  B+=x[i]/delta[i]/delta[i];
  C+=1/delta[i]/delta[i];

  X+=log(zdata[i])*x[i]/delta[i]/delta[i];
  Y+=log(zdata[i])/delta[i]/delta[i];

//}

//printf("%f\n",zdata[i]);

kai2+=(log(zdata[i])+0.222047*x[i]-7.016497)*(log(zdata[i])+0.222047*x[i]-7.016497)/(delta[i]*delta[i]);


    }

b=(B*X-A*Y)/(B*B-A*C);
a=(C*X-B*Y)/(C*A-B*B);

Delta=A*C-(B*B);
deltaa=sqrt(C/Delta);
deltab=sqrt(A/Delta);

//kai2+=(log(zdata[i])-a*x[i]-b)*(log(zdata[i])-a*x[i]-b)/(delta[i]*delta[i]);


//printf("%f %f\n",x[i],zdata[i]);

//for ( i = 0; i <=20; i++)
//{
//  damy1=(log(zdata[l])-a*x[l]-b)*(log(zdata[l])-a*x[l]-b);
//damy1=zdata[i];
//  damy2=x[i];
//kai2+=(log(zdata[i])-a*x[i]-b)*(log(zdata[i])-a*x[i]-b)/(delta[i]*delta[i]);

//printf("%f\n",kai2);

//printf("%.10f\n",damy1);

//}

printf("%f %f %f %f %f\n",a,b,deltaa,deltab,kai2);

  fclose(fp);
  return 0;
} 

double a(double ,double,double){


}
