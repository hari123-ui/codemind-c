#include<stdio.h>
int main()
{
    int x,k=1;
    scanf("%d",&x);
    for(int i = x;i>=1;i--)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d ",j);
          
        }
        printf("
");
       
    }
}