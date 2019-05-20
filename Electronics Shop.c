#include<stdio.h>
int main()
{
  long int b,n,m,key[1000000],drive[1000000],max=0,tot=0;
  size_t i;
  size_t j;
  scanf("%ld%ld%ld",&b,&n,&m);
  for(i=0;i<n;i++){
        scanf("%ld",&key[i]);}
  for(j=0;j<m;j++){
        scanf("%ld",&drive[j]);}
     max=key[0]+drive[0];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){

   tot=key[i]+drive[j];
  if(tot>max&&tot<=b){
    max=tot;}

    }}
    if(max==0){
        printf("-1");}
        else{
    printf("%ld",max);}
    return 0;}
