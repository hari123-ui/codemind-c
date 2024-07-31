#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int z = x+y;
    int c = 500 - (x*2);
    int d = 1000 - (z*4);
    int e = 1000 -(y*4);
    int f = 500 - (z*2);
    if((c+d) >= (e+f) )
    {
    
    printf("%d",c+d);
    }
    else if ((e+f) > (c+d))
    {
        printf("%d",e+f);
    }
}