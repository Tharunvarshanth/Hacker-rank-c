#include<stdio.h>

int main()

  {
      int n,p,answer;
      scanf("%d",&n);
      scanf("%d",&p);

if(n-p>p-1){
      if(p%2==0){
      answer=p/2;
     }
      else {
        answer=(p-1)/2;
        }}
          else
            if(p%2==0){
      answer=(n-p)/2;
     }
      else {
        answer=((n-p)+1)/2;
     }

 printf("%d",answer);
return 0;
  }
