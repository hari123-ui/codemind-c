#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    for(int i = 1; i <=t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        int j = y -z;
        if(j >= x)
        {
            printf("YES
");
        }
        else if(j<=x)
        {
            printf("NO
");
        }
        
        
    }
    return 0;
}