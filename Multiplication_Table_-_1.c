#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =1;i<=12;i++)
    {
        int j = x*i;
        printf("%d x %d = %d
",x,i,j);
    }
    return 0;
}