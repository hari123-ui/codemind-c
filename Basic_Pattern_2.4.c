#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
    {
        for(int j=i;j<=x;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
    return 0;
}