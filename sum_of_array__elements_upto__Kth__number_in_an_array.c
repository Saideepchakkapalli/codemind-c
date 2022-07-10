#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],k;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}













