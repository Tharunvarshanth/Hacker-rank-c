#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y>=2100){
        printf("13.09.%d",y);}
   else if(y%4==0){
    printf("12.09.%d",y);}
    else{
        printf("13.09.%d",y);}
        return 0;}
