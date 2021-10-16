#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void nQueens(int x[],int k,int n);
int Place(int x[],int l,int k);

int main()
{
	int n,i,x[10];
	
	printf("Enter total number of Queens= ");
	scanf("%d",&n);
	
	printf("\n");
	
	nQueens(x,1,n);
	
	
	
	return 0;
}

void nQueens(int x[],int k,int n)
{
	int l,i;
	
	for(l=1;l<=n;l++)
	{
		if(Place(x,l,k))
		{
			x[k]=l;
			
			if(k==n)
			{
				for(i=1;i<=n;i++)
					printf("%d ",x[i]);
					
				printf("\n");
			}
			
			else
				nQueens(x,k+1,n);
		}
		
	}	
	
}

int Place(int x[],int l,int k)
{
	int i;
	
	for(i=1;i<k;i++)
	{
		if((x[i]==l) || ((abs(x[i]-l) == abs(i-k))))
			return 0;
					
	}
	return 1;
	
}