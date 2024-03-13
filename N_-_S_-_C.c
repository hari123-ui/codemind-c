#include<stdio.h>
int main()
{
    int a,b,s=0,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a+1;i<b;i++)
    {
        s= i*i;
        c = i*i*i;
        printf("%d %d %d
",i,s,c);
    }
    return 0;
}