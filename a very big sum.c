#include<stdio.h>
int main()
{
     long long int ar[10],tot=0;
    int n;
    size_t i;
scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&ar[i]);
        tot+=ar[i];}
    printf("%lld",tot);

    return 0;
}
