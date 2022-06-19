#include <stdio.h>
#include <stdlib.h>

#define ndatamax 100
#define nmax 100

int main(void){
    double xdata[ndatamax];
    double ydata[ndatamax];
    int n,nc;
    FILE *fp;
    char s[nmax];
    char filename[nmax];

    printf("filename?\n");
    scanf("%s",filename);
    fp=fopen(filename, "r");
    n=0;
    while(fgets(s,nmax,fp)!=NULL){

	nc=sscanf(s,"lf%lf",&xdata[n],&ydata[n]);

	if(nc==2)n++
		     }
    fclose(fp);

    return 0;
}
