#include<stdio.h>
int main()
{
long int n,arr[1000000],c1=0,c2=0,c3=0,c4=0,c5=0;
    size_t i;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
            scanf("%ld",&arr[i]);

switch(arr[i])
{

case 1:
    c1++;
    break;
case 2:
    c2++;
    break;
case 3:
    c3++;
    break;
case 4:
    c4++;
    break;
case 5:
    c5++;
    break;}
}

if((c1>c2&&c1>c3&&c1>c4&c1>c5)||(c1==c2&&c1==c3&&c1==c4&&c1==c5)){
printf("1");}
     else if((c1<c2&&c2>c3&&c2>c4&c2>c5)||(c1==c2&&c2==c3&&c2==c4&&c2==c5)){
printf("2");}
    else if((c3>c1&&c3>c2&&c3>c4&c3>c5)||(c3==c2&&c3==c1&&c3==c4&&c3==c5)){
printf("3");}
else if((c4>c2&&c4>c3&&c4>c1&c4>c5)||(c1==c4&&c4==c3&&c4==c2&&c4==c5)){
printf("4");}
 else if((c5>c2&&c5>c3&&c5>c4&c5>c1)||(c5==c2&&c5==c3&&c5==c4&&c1==c5)){
printf("5");}












    return 0;
}
