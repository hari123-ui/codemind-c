#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =x;i>=1;i--)
    {
        for(int s=1;s<=i-1;s++)
        {
            printf(" ");
        }
        for(int j =i;j<=x;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
    return 0;
}