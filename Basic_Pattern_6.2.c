#include<stdio.h>
int main()
{
    int x,k;
    scanf("%d",&x);
    k=x;
    for(int i =1;i<=x;i++)
    {
        for(int s=1;s<=x-i;s++)
        {
            printf(" ");
        }
        for(int j =1;j<=i;j++)
        {
            printf("%d ",k);
        }
        printf("
");
        k=k-1;
    }
    return 0;
}