#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans ,g , a = 0, b = 0, m , n , o , p;
    int broke;
    scanf("%d",&ans);
    m=ans/1000;
    n=(ans % 1000) / 100;
    o=(ans % 100) / 10;
    p=(ans % 10);
    while(1)
    {
    scanf("%d",&g);/*當輸入為0*/
    if(g == 0)
    {
        break;
    }

    if(m == (g / 1000))
    {
        a += 1;
    }
    if(m == ((g % 1000) /100))
    {
        b += 1;
    }
    if(m == (((g % 100) /10)))
    {
        b += 1;
    }
    if(m == (g % 10))
    {
        b += 1;
    }
      
    if(n ==  (g / 1000))
    {
        b += 1;
    }
    if(n == ((g % 1000) /100))
    {
        a +=1 ;
    }
    if(n == (((g % 100) /10)))
    {
        b += 1;
    }
    if(n == (g % 10))
    {
        b += 1;
    }

    if(o == (g / 1000))
    {
        b += 1;
    }
    if(o == ((g % 1000) /100))
    {
        b += 1;
    }
    if(o == (((g % 100) /10)))
    {
        a += 1;
    }
    if(o == (g % 10))
    {
        b += 1;
    }
      
    if(p == (g / 1000))
    {
        b += 1;
    }
    if(p == ((g % 1000) /100))
    {
        b += 1;
    }
    if(p == (((g % 100) /10)))
    {
        b += 1;
    }
    if(p == (g % 10))
    {
        a += 1;
    }
    printf("%d",a);
    printf("A");
    printf("%d",b);
    printf("B");
}
}


