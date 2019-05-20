#include<stdio.h>
int main()
{
    int ar[999],n,tot=0;
    size_t i;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    tot+=ar[i];}


    printf("%d",tot);
}
