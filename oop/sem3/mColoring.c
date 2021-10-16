#include<stdio.h>

void mColoring(int G[10][10],int n,int x[],int m,int k);
void NextValue(int G[10][10],int n,int x[],int m,int k);

int main()
{
	int n,ne,u,v,i,j,G[10][10],x[10],m;
	
	printf("\nEnter the number of nodes= ");
	scanf("%d",&n);
	printf("\nEnter the number of edges= ");
	scanf("%d",&ne);
	
	for(i=1;i<=n;i++)   
	{
	   	for(j=1;j<=n;j++)
      	{
       		G[i][j]=0;
	 	}
	 	x[i]=0;
	}	
	for(i=1;i<=ne;i++)
    {
    	printf("\nEnter the first terminal vertex of the graph= ");	
		scanf("%d",&u);
		printf("Enter the second terminal vertex of the graph= ");
	    scanf("%d",&v);
	    
		G[u][v] = 1;
		G[v][u] = 1;
  		
	}
	
	printf("\nEnter the number of colors= ");
 	scanf("%d",&m);
	
	printf("Solutions are=\n");
	mColoring(G,n,x,m,1);
	
	return 0;
	
	
}


void mColoring(int G[10][10],int n,int x[],int m,int k)
{
	int i;
	do
	{
		NextValue(G,n,x,m,k);
		
		if(x[k]==0)
			return;
			
		if(k==n)
		{
			for(i=1;i<=n;i++)
			{
				printf("%d ",x[i]);
			}
			printf("\n\n");
		}
		
		else
			mColoring(G,n,x,m,k+1);
			
	}while(1);
}

void NextValue(int G[10][10],int n,int x[],int m,int k)
{
	int j;
	do
	{
		x[k]=(x[k]+1)%(m+1);
		
		if(x[k]==0)
			return;
				
		for(j=1;j<=n;j++)
		{
			if(G[k][j]==1 && x[k]==x[j])
				break;
		}
		
		if(j==n+1)
			return ;
		
		
	}while(1);
}