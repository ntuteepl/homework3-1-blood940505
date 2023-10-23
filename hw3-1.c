#include <stdio.h>
#include <stdbool.h>//skip
main()
{
int number;
scanf("%d",&number);
bool ans = true;
for (int i = 2;(i * i) <= number ;i++ ){
    if ((number % i) == 0 ){
        ans = false;
    }
}
if(number == 1){
    ans = true;
}
if(number == 2){
    ans = true;
}
if(ans == true){
printf("YES");
}
else if(ans == false){
    printf("NO");
}
}
