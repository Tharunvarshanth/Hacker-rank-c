#include<stdio.h>
#include<math.h>
int main()
{
    int n,ar[100],color10=0,color20=0,color30=0,color40=0,color50=0,x,tot=0;

    size_t i;
     scanf("%d",&n);
    for(i=0;i<n;i++){
         scanf("%d",&ar[i]);

if(ar[i]==10||ar[i]==1){
color10+=1;}
else if(ar[i]==20||ar[i]==2){
    color20+=1;}
else if(ar[i]==30||ar[i]==3){
    color30+=1;}
else if(ar[i]==40||ar[i]==4){
    color40+=1;}
else if(ar[i]==50||ar[i]==5){
    color50+=1;}

    }


x=color10/2;
tot+=x;
x=color20/2;

tot+=x;
x=color30/2;

tot+=x;
x=color40/2;

tot+=x;
x=color50/2;

tot+=x;

printf("%d",tot);



return 0;
}

