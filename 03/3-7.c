#include<stdio.h>
#include<math.h>
int main(void){
  int i;
  double x0,xa,x,xx,a,K,c;
  double dt,d;
  x0=10.0;
  x=x0;
  xa=x0;
  a=1.2;
  dt=0.01;
  K=100.0;
  FILE *fp;
  fp=fopen("3-6.dat","w");
  fprintf(fp, "%f, %f, %f\n",0.0,xa,x);
  for(i=1;i<1000;i++){
    xa=K/(1+(K/x0-1)*exp(-a*dt*i));
    xx=x+dt*a*(1-x/K)*x;
    x=xx;
 
      fprintf(fp,"%f,%f,%f\n",dt*i,xa,x);
  }
  fclose(fp);
  return 0;
}
