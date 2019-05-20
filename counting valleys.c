#include<stdio.h>
void countingvalley(int n ,char s[] ,int count,int i)
{


    for(i=0;i<n;i++){
      if(s[i+1]==s[i]){
        count++;}
    }
}
int main(void)
 {
     int n,count=0;
     char s[20],U,D;
     size_t i;
     scanf("%d",&n);

     for(i=0;i<n;i++){
      scanf("%s",&s[i]);}
 for(i=0;i<n;i++){
    if(s[i]=='D'&&
       s[i+1]=='D')

 {
       count++;

       }  }
        for(i=0;i<n;i++){
        if(s[i]=='D'&&
       s[i+1]=='D'&&
       s[i+2]=='D'){
        count--;}
 }





  printf("%d",count);

return 0;
 }
