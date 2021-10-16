#include<stdio.h>
#include<stdlib.h>

void Maxmin(int a[],int i,int j,int *max,int *min);

int main()
{
	int a[40],n,i,x,max,min;
	
	printf("Enter number of elements in list= ");
	scanf("%d",&n);
	
	printf("Enter elements= ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	Maxmin(a,1,n,&max,&min);
	printf("Max element = %d    Min element = %d",max,min);
	
	
	
	return 0;
}
5

void Maxmin(int a[],int i,int j,int *max,int *min)
{
	int min1,max1,mid;
	if(i==j)
	{
		*min=a[i];
		*max=a[i];
	}
	else
	{
		if(i==j-1)
		{
			if(a[i]<a[j])
			{
				*max=a[j];
				*min=a[i];
			}
			else
			{
				*max=a[i];
				*min=a[j];
				
			}
		}
		else
		{
			mid=(i+j)/2;
			
			Maxmin(a,i,mid,max,min);
			
			Maxmin(a,mid+1,j,&max1,&min1);
			
			if(*max<max1)
					*max=max1;
					
				if(*min>min1)
					*min=min1;
					
			
		}
	}
	
}