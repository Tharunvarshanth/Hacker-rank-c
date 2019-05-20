#include<stdio.h>
int main()
{
   long long int arr[5],min,max,tot1=0,tot2=0,tot3=0,tot4=0,tot5=0,tot[5];
    size_t i;
    for(i=0;i<5;i++){
        scanf("%lld",&arr[i]);}

     tot[0]=arr[0]+arr[1]+arr[2]+arr[3];
      tot[1]=arr[0]+arr[1]+arr[2]+arr[4];
      tot[2]=arr[0]+arr[1]+arr[3]+arr[4];
      tot[3]=arr[0]+arr[2]+arr[3]+arr[4];
      tot[4]=arr[1]+arr[2]+arr[3]+arr[4];

min=tot[0];
for(i=0;i<5;i++){
if(min>tot[i]){
   min=tot[i];}
}
printf("%lld",min);

max=tot[0];
for(i=0;i<5;i++){
if(max<tot[i]){
    max=tot[i];}
    }
    printf("%  ld",max);
        return 0;




}
