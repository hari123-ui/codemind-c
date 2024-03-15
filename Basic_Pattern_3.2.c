#include<stdio.h>
int main()
{
    int x,k=1;
    scanf("%d",&x);
    for(int i = x;i>=1;i--)
    {
        for(int j = i;j>=1;j--)
        {
            
            printf("%d ",k);
           
        }
        printf("
");
        k = k+1;
    }
    return 0;
}