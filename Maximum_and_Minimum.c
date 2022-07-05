#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],min=0,max=0,k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(arr[i]==c)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
            if(min>arr[i] || min==0)
            {
                min=arr[i];
            }
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else{
        printf("%d %d",min,max);
    }
}