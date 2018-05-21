#include<stdio.h>
int main(void){
  float  r, k;
  int t, x, xx, x0;
  r=2.3,k=100,x0=20;
  FILE *fp;
  fp=fopen("output.dat", "a");
  fprintf(fp, "%d\n", x0);
  x=x0;
  for(t=0 ; t<300; t++){
  xx=x+r*(1-x/k)*x;
  x=xx;
  fprintf(fp, "%d\n", xx);
  }
  fclose(fp);
  return 0;
}

