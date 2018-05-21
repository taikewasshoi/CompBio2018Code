#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
  int r,M,N,x,i,j,K,F;
  srand(time(NULL));
  for(j=0;j<10;j++){
    M=1;
    N=6;
    x=0;
    i=0;
    for(i=0;i<100;i++){
      r=rand()%(N-M+1)+M;
      x=x+r;
      if(x>=100){
	K=K+i;
	break;

      }
    }
  }
  F=K/10;

  printf("%d\n",F);
  return 0;
}
