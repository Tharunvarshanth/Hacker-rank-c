#include<stdio.h>
int main()
{
    int s,t,a,b,m,n,apples[100000],oranges[100000],x,count1=0,count2=0,y;
    size_t i;

    scanf("%d%d",&s,&t);

    scanf("%d%d",&a,&b);

scanf("%d%d",&m,&n);
for(i=0;i<m;i++){
    scanf("%d",&apples[i]);
   x=apples[i]+a;
   if(s<=x&&x<=t){
    count1+=1;}
}
 for(i=0;i<n;i++){
        scanf("%d",&oranges[i]);
        y=oranges[i]+b;
        if(s<=y&&y<=t){
            count2+=1;}}

printf("%d\n",count1);
printf("%d\n",count2);


    return 0;
}
