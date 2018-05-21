#include<stdio.h>
int main(void){
  int i;
  for(i=0;i<10;i++){
    printf("%d: ",i);
    if(i>5){
      printf("iは5より大きい,");
    }
    else  if(i==3){
    printf("iは3と等しい");
    }
    else if((i>=3)&&(i<=6)){
	(”iは3以上6以下");
       }
   

　　 if(!(i==1||i==2)){
      printf("iは1または2ではない,");
    }
    printf("\n");
  }
  return 0;
}
   
