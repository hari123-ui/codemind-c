#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int j = (a+b+c+d+e)/5;
    if(j>=90)
    {
        printf("Grade A");
    }
    else if(j>=80)
    {
        printf("Grade B");
    }
     else if(j>=70)
    {
        printf("Grade C");
    }
     else if(j>=60)
    {
        printf("Grade D");
    }
     else if(j>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}