#include<stdio.h>
int main()
{
    int x,c;
    scanf("%d",&x);
    for( c = 0;x!=0;c++)
    {
        x = x/10;
        
    }
    printf("%d",c);
    return 0;
}