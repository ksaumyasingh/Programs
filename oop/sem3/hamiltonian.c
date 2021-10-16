#include<stdio.h>

void Hamiltonian(int G[10][10],int n,int x[10],int k);
void NextValue(int G[10][10],int n,int x[],int k);


int main()
{
	int n,ne,u,v,i,j,G[10][10],x[10];
	
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
	
	x[1]=1;	
	
	for(i=1;i<=ne;i++)
    {
    	printf("\nEnter the first terminal vertex of the graph= ");	
		scanf("%d",&u);
		printf("Enter the second terminal vertex of the graph= ");
	    scanf("%d",&v);
	    
		G[u][v] = 1;
		G[v][u] = 1;
  		
	}
	
	printf("\nHamiltonian Cycles: \n");
	Hamiltonian(G,n,x,2);
	
	return 0;
	
}
	
void Hamiltonian(int G[10][10],int n,int x[10],int k)
{
	int i;
	do
	{
		NextValue(G,n,x,k);
		
		if(x[k]==0)
			return;
			
		if(k==n)
		{
			for(i=1;i<=n;i++)
			{
				printf("%d ",x[i]);
			}
			printf("1");
			printf("\n\n");
		}
		
		else
			Hamiltonian(G,n,x,k+1);
			
	}while(1);
	
}

void NextValue(int G[10][10],int n,int x[],int k)
{
	int j;
	do
	{
		x[k]=(x[k]+1)%(n+1);
		
		if(x[k]==0)
			return;
			
		if(G[x[k-1]][x[k]]!=0 )
		{
			for(j=1;j<=k-1;j++)
			{
				if(x[k]==x[j])
					break;
			}
			
			if(j==k)
			{
				if((k<n) || ((k==n) && G[x[n]][x[1]]!=0))
					return ;
			}
		
		}
		
	}while(1);
}
