#include<stdio.h>
int main()
{
    int r,n,m,s=0;
    scanf("%d",&n);//145
    m=n;//m=145
    while(m>0)
    {
    	int f=1;
        r=m%10;//r=1
        m=m/10;//m=0
        while(r>=1)//r=1>=1
        {
            f*=r;//f=1
            r--;
        }
        s=s+f;//s=120+24=144+1=145
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}