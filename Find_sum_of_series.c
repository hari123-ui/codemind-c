#include<stdio.h>
int main()
{
    int x;float k=1.0f,j=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        j = j+ (k/i);
    }
    printf("%.2f",j);
    return 0;
}