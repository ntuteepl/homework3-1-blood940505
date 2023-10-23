#include <stdio.h>
#include <stdbool.h>
main()
{
int s,d1,d2;
int a1,a2;
scanf("%d %d",&a1,&a2);
for(int i = 1; i < 5 ;i++){
int q = a1 / i;
d1 = d1 + q;
}
for(int i = 1; i < 5 ;i++){
int q = a2 / i;
d2 = d2 + q;
}
if(d1 > d2){
    printf("%d",a2);
}
if(d1 < d2){
    printf("%d",a1);
}
if(d1 == d2){
    if(a1 > a2){
        printf("%d",a2);
    }
    if(a1 < a2){
        printf("%d",a1);
    }
}
}
