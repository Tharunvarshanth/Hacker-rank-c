#include<stdio.h>
 int main(){
long  int k,i,j,c=0,t,a[10000];
long double to,reverse=0;
size_t x;
 scanf("%ld%ld%ld",&i,&j,&k);

for(x=0;x<=j-i;x++){
    a[x]=i+x;

      reverse =(a[x]%10)*10+a[x]/10;

      to=(reverse-a[x])/k;
      t=to;

      if(t==to){
        c++;}
      }
      printf("%ld",c);



      return 0;
}












