#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int p=a*b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    printf("%d",p/b);
}