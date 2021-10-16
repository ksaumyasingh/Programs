
//[00:33, 3/7/2021] Sanskriti Negi: 
#include<stdio.h>
#include<stdlib.h>

// BREATH FIRST TRAVERSAL OF G (BFT)

void BFT(int m[10][10],int n);
void BFS(int m[10][10],int n,int v,int visited[]);
void enqueue(int q[],int*front,int *rear,int val);
int dequeue(int q[],int *front,int *rear);
int isEmpty(int *front,int *rear);


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
	
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
			printf("%d ",m[i][j]);
		printf("\n");
		
	}
	
	BFT(m,v);
	
	
	return 0;
}

void BFT(int m[10][10],int n)
{
	int visited[20],i;
	
	for(i=1;i<=n;i++)
		visited[i]=0; // All vertices are unvisited
		
	printf("\n");
	for(i=1;i<=n;i++)
		BFS(m,n,i,visited);
	
}


void BFS(int m[10][10],int n,int v,int visited[])
{
	int u,front=0,rear=-1,size,q[n],w; // q is a queue of unexplored vertex
	
	u=v;
	
	if(visited[u]==0)
		printf("%d ",u); // printing visited node
	
	visited[u]=1;

	while(1)
	{
		for(w=1;w<=n;w++)
		{
			if(m[u][w]==1)
			{
				if(visited[w]==0)
				{
					enqueue(q,&front,&rear,w); // w is unexplored
					printf("%d ",w);
					visited[w]=1;
				
				}	
			}
		}
		if(isEmpty(&front,&rear))  //No unexplored vertex
			return ;
		u=dequeue(q,&front,&rear); //getting first unexplored vertex
	}

	
}


void enqueue(int q[],int*front,int *rear,int val)
{
	*rear=*rear+1;
	q[*rear]=val;
}


int dequeue(int q[],int *front,int *rear)
{

	int ele;
	ele=q[*front];
	*front=*front+1;
	return ele; 
}

int isEmpty(int *front,int *rear)
{
	if(*rear<*front)
	   return 1;
	else
	   return 0;   
}