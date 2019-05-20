#include<stdio.h>
int main()
{int n,a[10000],max,min,x=0,y=0;

    size_t i;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
      min=a[0];
     max=a[0];
    for(i=0;i<n;i++){
       if(max<a[i])
        {max=a[i];
       x++;}
    if(min>a[i]){
            min=a[i];
y++;}
    }
    printf("%d",y);
    printf("  %d",x);

}
