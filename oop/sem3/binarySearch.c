#include<stdio.h>
//iterative operator
int binarySearch(int a[],int n,int x)
{
	int low,high,mid;
	low=1;
	high=n;	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x<a[mid])
			high=mid-1;
		else if(x>a[mid])
				low=mid+1;
			else 
				return mid;
	}
	return 0;
}
//recursive method
int binSrch(int a[],int low,int high,int x)
{
	int mid;
	if(high==low)
	{
		if(x=a[low])
			return low;
		else
			return 0;
	}
	else
	{
		mid=(low+high)/2;
		if(x==a[mid])
			return mid;
		else if(x<a[mid])
				return binSrch(a,low,mid-1,x);
			else 
				return binSrch(a,mid+1,high,x);
	}
}
//ternary operator
int BinSrch(int a[],int low,int high,int x)
{
	int mid;
	if(low>high)
		return 0;
	mid=(low+high)/2;
	return(a[mid]==x?mid:a[mid]>x?BinSrch(a,low,mid-1,x):BinSrch(a,mid+1,high,x));
}
void main()
{
	int a[60],x,n,i,mid;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter sorted array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("enter ele to be searched");
	scanf("%d",&x);
	
	mid=binSrch(a,1,n,x);//binarySearch(a,n,x);//binSrch(a,1,n,x);
	
	if(mid==0)
		printf("ele not present in the list");
	else
		printf("ele present at %d loction",mid);
}