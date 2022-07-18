#include<stdio.h>
int pal(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",pal(a[i]));
    }
}