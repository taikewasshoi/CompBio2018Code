#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
  double x1,x2,y1,y2,N,It,λ,ε;
  srand(time(NULL));
  N=1;
  int i,n;
  double t,dt;
  double S[2];
  double I[2];
  double R[2];
  double V[2];
  double a,b,r;
  FILE *fp;
  fp=fopen("output_6-7.csv","w");
  dt=0.001;
  b=0.001;
  r=5.0;
  t=0.0;
  R[0]=10000.0;
  I[0]=1000.0;
  S[0]=1000.0;
  N=1;
  for(i=1;i<=1000;i++){
    It=I[0]*exp(λ*dt*i)+ε;
    x1=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    x2=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    y1=sqrt(-2*log(x1))*cos(2*M_PI*x2);
    
    t=dt*i;
    S[1]=S[0]+dt*(-b*S[0]*(I[0]+y1));
    I[1]=dt*(b*S[0]*I[0]-r*(I[0]+y1))+I[0]+y1;
    R[1]=R[0]+r*(I[0]+y1)*dt;
    S[0]=S[1];
    I[0]=I[1];
    R[0]=R[1];
    V[1]=V[0]+(It-I[0])*(It-I[0]);

    fprintf(fp,"%f,%f,%f,%f\n",t,S[0],I[0],R[0]);

  }
  fclose(fp);
  return 0;
}

