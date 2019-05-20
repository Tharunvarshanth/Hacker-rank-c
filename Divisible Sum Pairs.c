#include<stdio.h>
int main()
{
   int ar[100],k,n,c=0;
   size_t i;
   size_t j;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++){
     scanf("%d",&ar[i]);}
      for(i=0;i<n-1;i++){

      for(j=1+i;j<n;j++){
            if((ar[i]+ar[j])%k==0){
                c++;}
      }

      }
    printf("%d",c);
    return 0;
}


























