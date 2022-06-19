#include <stdio.h>
#include <math.h>

/*一行ずつ読み込んで配列に返すプログラム */

#define ndatamax 100
#define nmax 100

int main(void)
{
  int n,nc,i;
  double xdata[ndatamax];
  double ydata[ndatamax];
  double zdata[ndatamax],a[ndatamax],b[ndatamax],c[ndatamax];
  FILE *fp;
  char s[nmax];
  char filename[nmax];

  printf("filename?\n");
  scanf("%s",filename);
  fp=fopen(filename,"r");
  n=0;
  i=0;

if (fp==NULL) {
    printf("ファイルが見つかりません。\n");
    return 0;
  }

     while ( ! feof(fp) && n < nmax) {
        fscanf(fp, "%lf %lf %lf",&(a[n]),&b[n],&c[n]);
        n++;
    }

    for(i=0;i<n;i++){

printf("%f %f %f\n",a[i],b[i],c[i]);

    }

  fclose(fp);
  return 0;
} 
