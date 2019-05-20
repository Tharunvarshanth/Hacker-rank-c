#include<stdio.h>
int main()
{
    int h[1000],n,k,max=0,x;
    size_t i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++);{
    scanf("%d",&h[i]);}

    max=0;
for(i=0;i<n;i++);{
        if(max<h[i]&&h[i]>k){
        max=h[i];}
}
if(max!=0){
    x=max-k;
printf("%d",x);}
else{
    printf("0");}


}
