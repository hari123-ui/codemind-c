#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j =1;j<=x;j++)
        {
            if(i%2 != 0)
            {
            printf("1 ");
            }
            else
            {
            printf("0 ");
            }
        }
        printf("
");
    }
}