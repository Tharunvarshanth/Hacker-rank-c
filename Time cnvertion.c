#include<stdio.h>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int h,m,i;
   char word;

   scanf("%d%d%d",&h,&m,&i);
   scanf("%s",&word);
  if(word=='p'){
  switch(h){

   case 1:
    printf("13:%d:%d",m,i);
    break;
    case 2:
    printf("14:%d:%d",m,i);
    break;
    case 3:
    printf("15:%d:%d",m,i);
    break;
    case 4:
    printf("16:%d:%d",m,i);
    break;
    case 5:
    printf("17:%d:%d",m,i);
    break;
    case 6:
    printf("18:%d:%d",m,i);
    break;
    case 7:
    printf("19:%d:%d",m,i);
    break;
    case 8:
    printf("20:%d:%d",m,i);
    break;
    case 9:
    printf("21:%d:%d",m,i);
    break;
    case 10:
    printf("22:%d:%d",m,i);
    break;
    case 11:
    printf("23:%d:%d",m,i);
    case 12:
    printf("00:%d:%d",m,i);
    break;
   }}else if(word=='a'){
   printf("%d:%d:%d",h,m,i);}























       return 0;
}
