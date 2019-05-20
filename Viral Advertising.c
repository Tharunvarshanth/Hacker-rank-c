#include<stdio.h>
int main()
{
    int n,tot=0,a[100];
    size_t i;
    scanf("%d",&n);
a[0]=5;
    for(i=0;i<n;i++){

      tot+=a[i]/2;
      a[i+1]=a[i]/2*3;
    }

printf("%d",tot);
return 0;
}
