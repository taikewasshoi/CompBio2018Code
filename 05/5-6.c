#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
  int r,x,i;
  FILE *fp;
  fp=fopen("output_5-8.csv","w");
  
  srand(time(NULL));
  x=0;
  for(i=0;i<100;i++){
    r=rand()%2;
    if(r==0){
    x=x+1;
    }
  
  else{
    x=x-1;
  }
    fprintf(fp,"%d\n",x);
  }
  fclose(fp);
  return 0;
}
