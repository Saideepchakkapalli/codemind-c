#include<stdio.h>
int main()
{
    int n,s,c=0;
    scanf("%d",&n);
    scanf("%d",&s);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]%s!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}