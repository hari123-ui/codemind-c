#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int j = (x*y)/(x+y);
    printf("%d",j);
    return 0;
}