#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int j = 30*y;
    if(j<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
    
}