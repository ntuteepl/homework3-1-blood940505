#include <stdio.h>
#include <stdbool.h>
main()
{
int s1,s2,s3,d1,d2,d3,temp;
scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);

if(s1<s2)
{
    temp=s1;
    s1=s2;
    s2=temp;
    temp=d1;
    d1=d2;
    d2=temp;
}
if(s1<s3)
{
    temp=s1;
    s1=s3;
    s3=temp;
    temp=d1;
    d1=d3;
    d3=temp;
}

if(s2<s3)
{
    temp=s2;
    s2=s3;
    s3=temp;
    temp=d2;
    d2=d3;
    d3=temp;
}

int car = 1;
if(s2 < d3){
    car = car + 1;
}
if(s1 < d2){
    car = car + 1;
}
if(s1 >= d3 && s2 < d3 &&  s3 < d2){
    car = car - 1;
}

printf("%d",car);


}
