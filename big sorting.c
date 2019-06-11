#include<stdio.h>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{int a[1000],n,i,j,temp,y;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(j=0;j<n;j++){
    for(i=0;i<n;i++){
        if(a[i]>=a[i+1]){
            temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;}}}
y=(n+1)/2;
for(i=0;i<n;i++){
                printf("%d\n",a[i]);}

printf("%d\n",a[y-1]);}



