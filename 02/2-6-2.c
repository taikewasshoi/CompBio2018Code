#include<stdio.h>
int main(void){
  int i;
  FILE *fp;
  fp=fopen("for.dat","w");
  for(i=0;i<100;i++){
    fprintf(fp, "%d\n" , i);
  }
  fclose(fp);
  return 0;
}
