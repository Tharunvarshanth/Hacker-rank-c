#include<stdio.h>
int main()
{   int n,grades[100],x,x1,x2;
      size_t i;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&grades[i]);}
    for(i=0;i<n;i++)
{x1=67-grades[i];
 x2=40-grades[i];
    if(grades[i]>75){
        printf("%d\n",grades[i]);}

                else if(grades[i]<=75){
            x=75-grades[i];
        if(x<=3){
            printf("%d\n",75);}
            else{
                printf("%d\n",grades[i]);}}

        else if(grades[i]<=67){
        if(x1<=3){
            printf("%d\n",67);}
            else{
                printf("%d\n",grades[i]);}}

                          else if(grades[i]<=40){

        if(x2<=3){
            printf("%d\n",40);}
            else{
                printf("%d\n",grades[i]);}}





}






 return 0;
}
