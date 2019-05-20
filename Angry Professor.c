#include<stdio.h>
int main()
{
    int t,n,k,a[10000],y,c=0;
    size_t i;
    scanf("%d",&t);


    for(y=1;y<=t;y++){
      scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);


            if (a[i] <= 0){
                k--;
            }
        }

        if (k <= 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }





    return 0;
}
