#include<stdio.h>
int main()
{   int arr[5500],n;
float x,y,z,zer=0,neg=0,pos=0;
    size_t i;


    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
       if(arr[i]<0){
        neg++;}
       else if(arr[i]==0){
            zer++;}
          else  if(arr[i]>0){
       pos++;}

    }
     x=pos/n;y=neg/n;z=zer/n;
     printf("%f\n%f\n%f",x,y,z);


  return 0;
}

