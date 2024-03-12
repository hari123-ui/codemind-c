#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i = 1;i<=y;i++)
    {
        int j = x*i;
        printf("%d x %d = %d
",x,i,j);
    }
    return 0;
}