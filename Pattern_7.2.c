#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y = x;
    for(int i=1;i<=x;i++)
    {
        for(int s=1;s<i;s++)
        {
            printf(" ");
        }
        for(int j=x;j>=i;j--)
        {
            printf("%d ",y);
        }
        y = y-1;
        printf("
");
    }
}