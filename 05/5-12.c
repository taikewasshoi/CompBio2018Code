#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100
#define P 10
int main(void){
  int a[N],aa[N],i,k,l,t,r1,r2,r,z;
  int h,j,T1,T2;
  FILE *fp;
  fp=fopen("output_5-12.csv","w");
  srand(time(NULL));
  for(z=1;z<11;z++){
    k=10*z;
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
      T2=T1/100;  
    }
   
    }
   
  }
    fprintf(fp,"%d %d\n",k,T2);
  fclose(fp); 
 return 0;

}
