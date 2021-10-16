#include<stdio.h>
#include<stdlib.h>

float prim(float cost[10][10],int n,int t[10][3]);
// Prims Algorithm

int main()
{
	int u,v,t[10][3],n,ne,i,j;
	float cost[10][10],mincost,c;


	printf("Enter total number of vertices of graph= ");
	scanf("%d",&n);
	
	printf("Enter number of edges= ");
    scanf("%d",&ne);
   
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				cost[i][j]=0.0f;
			else
				cost[i][j]=9999.0;
		}
		
		
	}
      
	
	for(i=1;i<=ne;i++)
    {
    	printf("Enter the first terminal= ");
		scanf("%d",&u);
		
		
    	printf("Enter the second terminal= ");
		scanf("%d",&v);
    
			
		printf("Enter the cost associated with the edge %d and % d = ",u,v);
		scanf("%f",&c);
		cost[u][v]=c;
		cost[v][u]=c;
	}

	
	printf("\n");

	printf("Cost representation of graph:\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%f  ",cost[i][j]);
		printf("\n");
		
	}
	
	mincost= prim(cost,n,t);
	
	printf("\nMinimum cost of spanning tree= %f",mincost);
	
	printf("\n");
	
	printf("Edges including in Minimum Cost Spanning tree =\n");
	for(i=1;i<=n-1;i++)
	{
		printf("\n%d  %d",t[i][1],t[i][2]);
	}
	
	
	
	return 0;
	
}	


float prim(float cost[10][10],int n,int t[10][3])
{
	int k,l,near[10],i,j,p;
	float mincost,min=9999.0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if( cost[i][j]!=0.0 && min>cost[i][j])
			{

				min=cost[i][j];
				k=i;
				l=j;
			}
		}
	}
	
	t[1][1]=k;
	t[1][2]=l;
	
	mincost=cost[k][l];
	
	for(i=1;i<=n;i++)
	{
		if(cost[i][k]<cost[i][l])
			near[i]=k;
		else
			near[i]=l;
	}
	near[k]=0;
	near[l]=0;
	

	
	for(i=2;i<=n-1;i++)
	{
		min=9999;
		for(p=1;p<=n;p++)
		{
			if(near[p]!=0 && cost[p][near[p]]<min)
			{
				min=cost[p][near[p]];
				j=p;
				
			}
		}
		
		t[i][1]=j;
		t[i][2]=near[j];
		
		mincost=mincost+ cost[j][near[j]];
		
		near[j]=0;
		for(k=1;k<=n;k++)
		{
			if(near[k]!=0 && cost[k][near[k]]>cost[k][j])
				near[k]=j;
		}
	
	}
	return mincost;
	
}		