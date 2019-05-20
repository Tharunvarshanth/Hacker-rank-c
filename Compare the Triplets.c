#include<stdio.h>
int main()
{
    int a[3],b[3],counta=0,countb=0;
    size_t i;

    for(i=0;i<3;i++){
        scanf("%d",&a[i]);}

     for(i=0;i<3;i++){
        scanf("%d",&b[i]);}

 for(i=0;i<3;i++){
       if(a[i]<b[i]&&a[i]!=b[i]){
        countb+=1;}
       else  if(a[i]>b[i]&&a[i]!=b[i]){
        counta+=1;}
 }
       printf("%d%2d",counta,countb);


       return 0;
 }
