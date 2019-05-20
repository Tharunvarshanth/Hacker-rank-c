#include<stdio.h>
int main()
{int y3,y4;
    float v1,v2,x1,x2;
float y,y1;
    scanf("%f",&x1);  scanf("%f",&v1);
    scanf("%f",&x2); scanf("%f",&v2);
    if(x1==x2||v1==v2){
        printf("NO");}
    if(x1<x2&&v1>v2){
        y=(x2-x1)/(v1-v2);
y3=y;
        if(y3==y&&y>=1){
            printf("YES");}
            else{
                printf("NO");}}
            if(x2<x1&&v2>v1){
        y1=(x1-x2)/(v2-v1);

        y4=y1;
          if(y1==y4&&y1>=1){
            printf("YES");}
        else{
            printf("NO");}
            }
    if(x1<x2&&v1<v2||x1>x2&&v1>v2){
        printf("NO");}












    return 0;
}

