#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<150)
    {
        printf("Person is Dwarf.");
    }
    else if(x>150&&x<165)
    {
        printf("Person is average heighted.");
    }
    else if (x>165 && x<=195)
    {
        printf("Person is taller.");
    }
    else 
    {
        printf("Abnormal height.");
    }
    return 0;
    
}