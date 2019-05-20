#include<stdio.h>





int main(void)
{
    int n,c[100],count=0;
    size_t i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
     if(c[i]==0){
     count+=1;}


     }

 for(i=0;i<n;i++){
                 if (c[i]==0&&
        c[i+1]==0&&
        c[i+2]==0){
        count-=1;}
     }
     printf("%d",count-1);
     return 0;

}
