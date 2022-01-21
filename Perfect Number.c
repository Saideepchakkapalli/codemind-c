#include<stdio.h>
int main()
{
	int x,y,s=0;
	scanf("%d",&y);
	for(x=1;x<=y/2;x++)//x=14<=14
	{
		if(y%x==0) //28%14==0
		{
			s+=x; //s=14+14
		}
	}
	if(s==y)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}