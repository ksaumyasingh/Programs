#include<stdio.h>
void main()
{
	int a[10][10],n,i,j,input;
	printf("enter no of vertices in graph\n");
	scanf("%d",&m);
	printf(" enter adjacency matrix 1\n");
	for(i=1;i<=m;i++)
		for(j=1;j<=m;j++)
		{
			printf("\nif there is edge present between %d and %d vartex enter 1.yes else 0.no : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	/*for(i=1;i<=m;i++)
		for(j=1;j<i;j++)
		{
			printf("\nif there is edge present between %d and %d vartex enter 1.yes else 0.no : ",i+1,j+1);
			scanf("%d",&a[i][j]);
			a[j][i]=a[i][j];
		}*/
	printf("\nadjacency matrix of graph is:\n");
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}














/*void BFS(v)
{
	u=v;
	visited[v]=1;
	vertices=2u;
	do
	{
		for()
			if(visited[w]=0)
			if(isEmpty)
	}
	while();
}*/