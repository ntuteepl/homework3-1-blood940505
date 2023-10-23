#include <stdio.h>
#include <stdbool.h>
main()
{
int s,d1,d2;
int a1,a2;
scanf("%d %d",&a1,&a2);
d1=(a1/1000 + a1%1000/100 + a1%100/10 + a1/10);
d2=(a2/1000 + a2%1000/100 + a2%100/10 + a2/10);

    
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
