#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void shortestpath(int v,int n,float cost[][20],float dist[])
{
    int s[20],w,u,i,j;
    float min;

    for(i=1; i<=n; i++)
    {
        s[i]=0;
        dist[i]=cost[v][i];
    }
    s[v]=1;
    dist[v]=0.0;
    for(i=2; i<=n; i++)
    {
        min=9999.0;
        for(j=1; j<=n; j++)
        {
            if(dist[j]!=9999.0&&s[j]!=1&&min>dist[j])
            {
                min=dist[j];
                u=j;
            }
        }
        s[u]=1;
        for(j=1; j<=n; j++)
        {
            if(cost[u][j]!=9999.0&&s[j]!=1&&dist[j]>(dist[u]+cost[u][j]))
            {
                dist[j]=dist[u]+cost[u][j];
            }
        }

    }


}
int main()
{
    int n,ne,i,j,k,v,u;
    float cost[20][20],dist[20],c;
  

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
	}
 
    shortestpath(1,n,cost,dist);

    printf("\nSHORTEST DISTANCE FROM VERTEX 1 :\n");
    for(i=1; i<=n; i++)
    {
        printf("TO VERTEX %d = %f\n",i,dist[i]);
    }
}
