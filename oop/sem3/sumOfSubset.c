#include<stdio.h>
#include<stdlib.h>

void SumOfSub(int x[],int w[],int n,int m,int s,int k,int r);

int main()
{
	int i,x[10],w[10],m,s=0,r=0,n;
	
	printf("Enter total number of elements in the set= ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		printf("\nEnter the weight of element %d= ",i);
		scanf("%d",&w[i]);
		
		r=r+w[i];
		x[i]=0;
		
	}
	
	printf("\nEnter total weight= ");
	scanf("%d",&m);
	
	printf("\n");
	
	SumOfSub(x,w,n,m,s,1,r);
	
	
	
	
	return 0;
}

void SumOfSub(int x[],int w[],int n,int m,int s,int k,int r)
{
	int i;
	x[k]=1;
	
	if(s+w[k]==m) //Subset Found
	{
		for(i=1;i<=n;i++)
			printf("%d ",x[i]);
		printf("\n");
		
	}
		
		
	else if(s+w[k]+w[k+1]<=m)
			SumOfSub(x,w,n,m,s+w[k],k+1,r-w[k]);
			
	if((s+r-w[k]>=m ) && (s+w[k+1]<=m))
	{
		x[k]=0;
		SumOfSub(x,w,n,m,s,k+1,r-w[k]);
		
	}
}
	