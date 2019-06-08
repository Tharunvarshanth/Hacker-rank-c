#include<stdio.h>
int main()
{
    long int a,b,n,c=0,y=1,x,i;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%ld%ld",&a,&b);
        for(x=1;x*x<=b;x++){
            y=x*x;
            if(a<=y&&y<=b){
                c++;
            }}
            printf("%ld\n",c);
c-=c;



    }




        return 0;
    }
