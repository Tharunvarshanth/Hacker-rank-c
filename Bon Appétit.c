#include<stdio.h>
int main()
{

    int k,ba=0,bill[1000000],n,b;
float tot=0;
    size_t i;

    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++){
    scanf("%d",&bill[i]);
    tot+=bill[i];}
    scanf("%d",&b);
    tot=(tot-bill[k])/2;
    ba=b-tot;
    if(ba==0){printf("Bon Appetit");}
    else{
    printf("%d",ba);}































    return 0;
}
