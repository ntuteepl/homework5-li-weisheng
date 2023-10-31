#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money , t;
    float d;
    scanf("%d%d",&money,&t);
    if(t <= 60)
    d = money * t;
    if(t > 60 && t<= 120)
    d = money * t*1.33;
    printf("%.1f",d);
}

