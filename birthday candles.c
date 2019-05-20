#include<stdio.h>
int main()
{
   long int n,arr[100],c=0,x;
   size_t i;
   scanf("%ld",&n);
   for(i=0;i<n;i++){
    scanf("%ld",&arr[i]);}
    x=arr[0];
    for(i=0;i<n;i++){
   if(arr[i]>=x){
    x=arr[i];}}
    for(i=0;i<n;i++){
    if(x==arr[i]){
            c++;
   }}

   printf("%ld",c);
}
