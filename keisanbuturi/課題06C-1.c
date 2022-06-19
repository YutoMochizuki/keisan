#include <stdio.h>
#include <math.h>

#define ndatamax 100
#define nmax 100

int main(void)
{
  int n,nc,i;
  double xdata[ndatamax];
  double ydata[ndatamax];
  double zdata[ndatamax];
  double delta[ndatamax],x[ndatamax];
  FILE *fp;
  char s[nmax];
  char filename[nmax];

  printf("filename?\n");
  scanf("%s",filename);
  fp=fopen(filename,"r");
  n=0;
  i=0;

    while (fgets(s,nmax,fp)!=NULL){
    
    nc=sscanf(s,"%lf %lf %lf",&xdata[i],&ydata[i],&zdata[i]);

    if (nc==3)
    {
        n++;
    }
    
//  printf("%f %f %f\n",xdata[i],ydata[i],zdata[i]);

    delta[i]=sqrt(zdata[i]);
    x[i]=(xdata[i]+ydata[i])/2.0;

    printf("%f %f %f %f\n",x[i],zdata[i],zdata[i]+delta[i],zdata[i]-delta[i]);
    }

  fclose(fp);
  return 0;
} 
