#include<stdio.h>
int a[10];
int main()
{
	int i,n;
	printf("Enter the number of items:");
	scanf("%d",&n);
	printf("Enter the items:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	divide(0,n-1);
	printf("After sorting items are: ");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	return 0;
}
int divide(int low,int high)
{
	int mid;
	if(low<high)
	{
	mid=(low+high)/2;	
	divide(low,mid);
	divide(mid+1,high);
	merge(low,mid,high);
}
return 0;
}
int merge(int low,int mid,int high)
{
	int i=low,j=mid+1,p,b[10],k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
	  	b[k++]=a[i++];	
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
	b[k++]=a[i++];		
	}
	while(j<=high)
	{
		b[k++]=a[j++];
	}
	for(p=low;p<=high;p++)
	{
		a[p]=b[p];
	}
	return 0;
}
