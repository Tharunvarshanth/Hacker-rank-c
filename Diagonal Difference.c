#include<stdio.h>
int main()
{
    int arr[10000],n,y=0,z=0;
     int  x;
    size_t i;

    scanf("%d",&n);
    for(i=0;i<n*n;i++){
        scanf("%d",&arr[i]);}
        for(i=0;i<n;i++){
        y+=arr[i*(n+1)];

        z+=arr[(i+1)*(n-1)];    }

       x=y-z;
       if(x<0){
       printf("%d",-x);}
       else{
        printf("%d",x);}






        return 0;
}
