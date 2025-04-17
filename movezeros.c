#include<stdio.h>
void movezero(int n,int arr[])
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			if(i!=j)
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		 j++;
		}
	}	
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	movezero(n,arr);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
