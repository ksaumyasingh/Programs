#include<stdio.h>
#include<conio.h>
struct edge
{
	int Ei;
	int Ef;
	int weight;
};
void adjust(struct edge a[],int i,int n)
{
	int item,j;
	struct edge b;
	b=a[i];
	item=a[i].weight;
	j=2*i;
	while(j<=n)
	{
		if((j<n)&&(a[j].weight>a[j+1].weight))
			j=j+1;
		if(item<=a[j].weight)
			break;
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=b;
}
int min(int cost[20][20],int near[20],int n)
{
	int f=1,j,p,m;
	for(j=1;j<=n;j++)
	{
		if(near[j]!=0)
		{
			if(f)
			{
				printf(" - ");
				m=cost[j][near[j]];
				p=j;
				f=0;
			}
			else 
				if(cost[j][near[j]]<m)
				{
					m=cost[j][near[j]];
					p=j;
				}
		}
	}
	return p;
}
void heapify(struct edge a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		adjust(a,i,n);
}
int prim(struct edge E[],int cost[20][20],int n,int t[20][3])
{
	int minCost,k,l,near[20],j,f,i,m,p;
	k=E[1].Ei;
	l=E[1].Ef;
	minCost=E[1].weight;
	t[1][1]=k;
	t[1][2]=l;
	
	for(i=1;i<=n;i++)
		if(cost[i][k]<cost[i][l])
			near[i]=k;
		else
			near[i]=l;
			
	near[k]=near[l]=0;
	
	for(i=2;i<n;i++)
	{
		j=min(cost,near,n);
		t[i][1]=j;
		t[i][2]=near[j];
		minCost=minCost+cost[j][near[j]];
		near[j]=0;
		for(k=1;k<=n;k++)
		{
		if(near[k]!=0&&(cost[k][near[k]]>cost[k][j]))
				near[k]=j;
		}
	}
	return minCost;
}
void main()
{
	int v,t[20][3],n,i,j,cost[20][20],nE;
	struct edge E[20];

	printf("Enter total number of vertices of graph= ");
	scanf("%d",&v);
	
	printf("Enter total number of Edges of graph= ");
	scanf("%d",&nE);
	for(i=1;i<=v;i++)
		for(j=1;j<=v;j++)
		{
			cost[i][j]=99;
		}
			
	for(i=1;i<=nE;i++)
	{
		printf("enter initial and final vertex of edge %d ",i);
		scanf("%d%d",&E[i].Ei,&E[i].Ef);
		printf("enter cost of edge %d ",i);
		scanf("%d",&E[i].weight);
		cost[E[i].Ei][E[i].Ef]=cost[E[i].Ef][E[i].Ei]=E[i].weight;
	}
	printf("\nedge list");
	for(i=1;i<=nE;i++)
		printf("\nEi:%d, Ef:%d, cost:%d ",E[i].Ei,E[i].Ef,E[i].weight);
	
	heapify(E,nE);
		
	printf("\ncost matrix\n");
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
			printf("%d ",cost[i][j]);
		printf("\n");
		
	}
	
	printf("\nminimum cost of spanning tree is : %d ",prim(E,cost,v,t));
	
	printf("\noutput table\n");
	for(i=1;i<v;i++)
	{
		for(j=1;j<=2;j++)
			printf("%d ",t[i][j]);
		printf("\n");
	}
}