#include<stdio.h>
#include<stdlib.h>

struct node
{
	int u,v;
	float cost;
};


float kruskal(struct node a[],int n,int ne,int t[10][3]);
void simpleUnion(int p[],int i,int j);
int find(int p[],int i);
void DelMin(struct node a[],int *ne,struct node *x);
void heapify(struct node a[],int ne);
void Adjust(struct node a[],int i,int ne);



int main()
{
	struct node a[10];
	int n,ne,t[10][3],i;
	float mincost;
	
	printf("Enter total number of vertices of graph= ");
	scanf("%d",&n);
	
	printf("Enter number of edges= ");
    scanf("%d",&ne);
	
		
	for(i=1;i<=ne;i++)
    {
    	printf("Enter the first terminal= ");
		scanf("%d",&a[i].u);
		
		
    	printf("Enter the second terminal= ");
		scanf("%d",&a[i].v);
    
			
		printf("Enter the cost associated with the edge %d and % d = ",a[i].u,a[i].v);
		scanf("%f",&a[i].cost);
		
	}
	
	mincost=kruskal(a,n,ne,t);
	
	printf("\nMinimum cost of spanning tree= %f",mincost);
	
	printf("\n");
	
	printf("Edges including in Minimum Cost Spanning tree =\n");
	for(i=1;i<=n-1;i++)
	{
		printf("\n%d  %d",t[i][1],t[i][2]);
	}
	
	
	return 0;
		
}


float kruskal(struct node a[],int n,int ne,int t[10][3])
{
	struct node x;
	float mincost=0.0f;
	int i,parent[10],j,k;
	
	heapify(a,ne);
	
	for(i=1;i<=n;i++)
		parent[i]=-1;
		
	i=0;
	
	while(i<n-1 && ne>0)
	{
		DelMin(a,&ne,&x);
		
		j=find(parent,x.u);
		k=find(parent,x.v);
		
		if(j!=k)
		{
			i++;
			
			t[i][1]=x.u;
			t[i][2]=x.v;
			
			mincost=mincost+ x.cost;
			
			simpleUnion(parent,j,k);
		}
			
		
	}
	if(i!=n-1)
	{
		printf("No spanning tree");
		return -1;
	}
	
	else
		return mincost;
}


void simpleUnion(int p[],int i,int j)
{
	p[j]=i;
}

int find(int p[],int i)
{
	while(p[i]>=0)
	{
		i=p[i];
	}
	
	return i;
}

void DelMin(struct node a[],int *ne,struct node *x)
{
	if(*ne==0)
		return ;
		
	*x=a[1];
	a[1]=a[*ne];
	*ne=*ne-1;
	
	Adjust(a,1,*ne);
}


void heapify(struct node a[],int ne)
{
	int i;
	
	for(i=ne/2;i>=1;i--)
		Adjust(a,i,ne);
			
}

void Adjust(struct node a[],int i,int ne)
{
	struct node ele;
	int j;
	
	ele=a[i];
	j=2*i;
	
	while(j<=ne)
	{
		if(j<ne && a[j].cost>a[j+1].cost)
			j=j	+1;
			
		if(ele.cost<=a[j].cost)	
			break;
			
		a[j/2]=a[j];
		j=2*j;	
	}
	
	a[j/2]=ele;
}










