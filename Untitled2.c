#include<stdio.h>
int main()
{
    int h[100],n,k,max=0,x;
    size_t i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++){
            scanf("%d",&h[i]);


        if(max<h[i]&&h[i]>k){
        max=h[i];}
}x=max-k;
if(max==0){

printf("%d",max);}
else{
    printf("%d",x);}











return 0;
}
