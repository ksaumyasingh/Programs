#include<stdio.h>
#include<conio.h>

void knapsack(int n,float w[],float p[],float m,float x[],float *tp);

int main()
{
	float weight[10],profit[10],m,ratio[10],temp;
	int i,j,id[10],n;
	float x[10],total_profit=0.0f;
	
	printf("Enter total number of objects= ");
	scanf("%d",&n);
	
	printf("\n");
	
		
	for(i=1;i<=n;i++)
	{
		printf("Enter profit of item %d= ",i);
		scanf("%f",&profit[i]);
	}

	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		id[i]=i;
		printf("Enter weight of item %d = ",i);
		scanf("%f",&weight[i]);
		
	}

		
		
	printf("\nEnter capacity of Knapsack= ");
	scanf("%f",&m);
	
	for(i=1;i<=n;i++)
		ratio[i]=profit[i]/weight[i];
		
	for(i=1;i<n;i++)  //Bubble Sort
	{
		for(j=1;j<=n-i;j++)
		{
			if(ratio[j]<ratio[j+1])
			{
				temp=id[j];
				id[j]=id[j+1];
				id[j+1]=temp;
				
				temp=ratio[j];
				ratio[j]=ratio[j+1];
				ratio[j+1]=temp;
				
				temp=weight[j];
				weight[j]=weight[j+1];
				weight[j+1]=temp;
				
				temp=profit[j];
				profit[j]=profit[j+1];
				profit[j+1]=temp;
			}
		}
	}
	
	knapsack(n , weight , profit , m , x , &total_profit);
	
	for(i=1;i<=n;i++)
	
		printf("\nAmount of fraction of item %d considered for Knapsack= %f",id[i],x[i]);
		
	return 0;
}



void knapsack(int n,float w[],float p[],float m,float x[],float *tp)
{
	int i;
	float u;
	
	for(i=1;i<=n;i++)
		x[i]=0.0;
		
	u=m;
	
	for(i=1;i<=n;i++)
	{
		if(w[i]>u)
			break;
			
		x[i]=1.0;
		*tp=*tp+p[i];
		u=u-w[i];
	
	}
	
	if(i<=n)
	{
		x[i]=u/w[i];
		*tp=*tp+(x[i]*p[i]);		
	}
		
}