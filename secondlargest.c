#include<stdio.h>
int second(int n,int arr[])
{
	int i,j,first=arr[0],second=-1;
	if(n<2)
	{
		return -1;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(arr[i]>first)
			{
				second=first;
				first=arr[i];
			}
			else if(arr[i]>second&&arr[i]!=first)
			{
				second=arr[i];
			}
		
			
		}
	}
	if(second==-1)
	{
		return -1;
	}
	else
	{
		return second;
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sec=second(n,arr);
	printf("%d",sec);
	return 0;
}
