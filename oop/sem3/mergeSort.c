#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
	int i,l,b[30],j,k;
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i=i+1;
		}
		else
		{
			b[k]=a[j];
			j=j+1;
		}
		k=k+1;
	}
	if(i>mid)
		for(l=j;l<=high;l++)
		{
			b[k]=a[l];
			k=k+1;
		}
	else
		for(l=i;l<=mid;l++)
		{
			b[k]=a[l];
			k=k+1;
		}	
	for(k=low;k<=high;k++)
		a[k]=b[k];
}
void mergeSort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
		
	}
}
void main()
{
	int a[60],n,i,mid;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	mergeSort(a,1,n);
	printf("output array");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
}