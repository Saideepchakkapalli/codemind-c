#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*arr,j,fact=0;
    float avg,sum=0,count=0;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            sum+=arr[i];
            count++;
        }
    }
    avg=sum/count;
    printf("%.2f",avg);
    return 0;
}