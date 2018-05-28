#include<stdio.h>

int main(void){
  int i,n;
  double t,dt;
  double S[2];
  double I[2];
  double R[2];
  
  double a,b,r;
  FILE *fp;
  fp=fopen("output_6-6.csv","w");
  dt=0.0001;
  a=2.0;
  b=0.1;
  r=0.5;
  t=0.0;
  R[0]=0.5;  
  I[0]=4.0;
  S[0]=1.0;


    for(i=1;i<=100000;i++){
      t=dt*i;
      S[1]=S[0]+dt*(-b*S[0]*I[0]);
      I[1]=dt*(b*S[0]*I[0]-r*I[0])+I[0];
      R[1]=R[0]+r*I[0];
      S[0]=S[1];
      I[0]=I[1];
      R[0]=R[1];
      if(i%100==0){
        fprintf(fp,"%f,%f,%f,%f\n",t,S[0],I[0],R[0]);
      }
    }
    fclose(fp);
    return 0;
}
      
