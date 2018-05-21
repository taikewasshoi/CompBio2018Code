#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100
int main(void){
  int a[N],aa[N],i,k,l,t,r1,r2,r;
  int h,j,T1,T2;
  srand(time(NULL));
  k=5;
  T1=0;
  j=0;

  for(h=0;h<1000;h++){

    for(i=0;i<k;i++){
      a[i]=1;  //have the mutation                                                                                                                                                                          
    }
    for(i=k;i<N;i++){
      a[i]=0;  //don't have the mutation                                                                                                                                                                    
    }

    for(t=0;t<1000;t++){
      l=0;
      for(i=0;i<N;i++){
        r1=rand()%N;
        r2=rand()%N;
        r=rand()%2;
        if(r==0){
          aa[i]=a[r1];
        }
        if(r==1){
          aa[i]=a[r2];
        }
        if(aa[i]==1){
          l++;
        }
      } //for i end                                                                                                                                                                                         
      for(i=0;i<N;i++){
        a[i]=aa[i];
      }
      if(l==N){
        T1=T1+t;
        j++;
        break;
      }
    } //for t end                                                                                                                                                                                           
    if(j==100){
      break;
    }
    T2=T1/100;
  } //for h end                                                                                                                                                                                             

  printf("%d\n",T2);

  return 0;

}
