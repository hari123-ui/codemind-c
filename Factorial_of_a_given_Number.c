#include<stdio.h>
int main()
{
    int x,k=1;
    scanf("%d",&x);
    for(int i = 1;i <=x;i++)
    {
     k = k*i;
    }
    printf("%d",k);
    return 0;
}