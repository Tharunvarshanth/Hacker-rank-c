#include<stdio.h>
#include <stdlib.h>
int main()
{ int q,x[100],y[100],z[100];
size_t i;
scanf("%d",&q);
i=0;
while(i<q){
    scanf("%d%d%d",&x[i],&y[i],&z[i]);
    i++;}
    for(i=0;i<q;i++){

       if(abs(z[i]-x[i])<abs(z[i]-y[i])){
        printf("Cat A\n");}
       else if(abs(z[i]-x[i])>abs(z[i]-y[i])){
        printf("Cat B\n");}
        else if(abs(x[i]-z[i])==abs(y[i]-z[i])){
        printf("Mouse C\n");}

    }

    return 0;

}

