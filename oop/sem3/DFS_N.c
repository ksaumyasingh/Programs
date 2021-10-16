#include<stdio.h>
#include<stdlib.h>

void DFS(int m[10][10],int visited[],int n,int v);
void DFT(int m[10][10],int n);

// DEAPTH FIRST TRAVERSAL OF G (DFT)


int main()
{
	int v,m[10][10],n,vn,i,j;


	printf("Enter total number of vertices of graph= ");
	scanf("%d",&v);
	
	for(i=1;i<=v;i++)
		for(j=1;j<=v;j++)
			m[i][j]=0;
			
	for(i=1;i<=v;i++)
	{
		printf("Total number of adjacent vertices of vertex %d= ",i);
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			printf("Enter adjacent vertex number= ");
			scanf("%d",&vn);
			if(m[i][vn]!=1)
			{
				m[i][vn]=1;
				m[vn][i]=1;
			}
		}
	}
	
	printf("\n");
	printf("Matrix representation of graph=\n");
	
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
			printf("%d ",m[i][j]);
		printf("\n");
		
	}
	
	printf("\n");
	
	DFT(m,v);
	
	return 0;
}

void DFT(int m[10][10],int n)
{
	int i,visited[10];
	
	for(i=0;i<=n;i++)
		visited[i]=0;
		
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0)
			DFS(m,visited,n,i);
	}
}


void DFS(int m[10][10],int visited[],int n,int v)
{
	int w;
	visited[v]=1;
	
	printf("%d ",v);//Visited vertex
	
	for(w=1;w<=n;w++)
	{
		if(m[v][w]==1)
		{
			if(visited[w]==0)  
			{
				DFS(m,visited,n,w);
				
				
			}
		}
	}
	
}