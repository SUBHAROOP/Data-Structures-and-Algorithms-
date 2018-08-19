#include<stdio.h>
int a[10],n;
int main()
{
	int u,p,i;
	printf("Enter the upper limit:");
	scanf("%d",&u);
	printf("Enter the items:");
	for(i=0;i<u;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the items to be searched:");
	scanf("%d",&n);
	p=bin_search(0,u-1);
	if(p==-1)
	{
	printf("%d ITEM NOT FOUND",n);
	}
	else
	{
		printf("%d is found at Location %d",n,p);
	}
	return 0;	
}
int bin_search(int beg,int end)
{
	int mid;
	mid=(beg+end)/2;
	if(beg<=end)
	{
		if(a[mid]<n)
		{
		return bin_search(mid+1,end);
		}
		else if(a[mid]>n)
        {
        	return bin_search(beg,mid-1);
		}
		else
		{
			return mid+1;
		}
	}
	else
	{
		return -1;
	}
	return 0;
}
