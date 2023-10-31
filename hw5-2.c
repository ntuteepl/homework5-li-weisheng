#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d,n;
    scanf("%f",&n);
    if (n <= 800);
        d = n*0.9 ;
    if(n>800 && n<=1500)
        d = n*0.9*0.9;
    if(n>1500)
        d = n*0.75;
     printf("%.1f",d);
}
