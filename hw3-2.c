#include <stdio.h>
#include <stdbool.h>
main()
{
int s1,s2,s3,d1,d2,d3;
scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);
int car = 1;
if(s2 <= d1){
    car = car + 1;
}
if(s3 <= d2){
    car = car + 1;
}
if(s3 >= d1){
    car = car - 1;
}
printf("%d",car);


}
