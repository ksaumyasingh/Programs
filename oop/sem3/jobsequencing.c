#include<stdio.h>
#include<conio.h>

struct job
{
	int id, deadline;
	float profit;
	
};

int jobSequencing(struct job a[],int j[],int n,float *tp);

int main()
{
	struct job a[20],temp;
	int j[20],n,i,t,k;
	float tp=0.0;
	
	printf("Total number of Jobs= ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		a[i].id=i;
		printf("\nEnter Profit of Job %d = ",i);
		scanf("%f",&a[i].profit);
		printf("\nEnter Deadline of Job %d = ",i);
		scanf("%d",&a[i].deadline);
	}
	
	printf("\nSequence of given profit and deadline=\n");
	for(i=1;i<=n;i++)
		printf("J[%d]		",a[i].id);
	printf("\n");
	for(i=1;i<=n;i++)
		printf("%f   ",a[i].profit);
	printf("\n");
	for(i=1;i<=n;i++)
		printf("%d		",a[i].deadline);

	
	for(i=1;i<n;i++)  //Bubble Sort
	{
		for(t=1;t<=n-i;t++)
		{
			if(a[t].profit<a[t+1].profit)
			{
				
				temp=a[t];
				a[t]=a[t+1];
				a[t+1]=temp;
				

			}
		}
	}
	
		
	
	k=jobSequencing(a,j,n,&tp);
	
	
	printf("\n\nSequence of job to give optimal solution=\n");
	for(i=1;i<=k;i++)
	printf("J[%d]		",a[i].id);
	printf("\n");
	for(i=1;i<=k;i++)
		printf("%f   ",a[i].profit);
	printf("\n");
	for(i=1;i<=k;i++)
		printf("%d		",a[i].deadline);

	printf("\n\nTotal profit= %f",tp);
		
	
	return 0;
}


int jobSequencing(struct job a[],int j[],int n,float *tp)
{
	int k,r,i,q;
	
	a[0].deadline=0;
	j[0]=0;
	j[1]=1;
	k=1;
	
	*tp=*tp+a[1].profit;
	
	for(i=2;i<=n;i++)
	{
		r=k;
		
		while(a[j[r]].deadline>a[i].deadline && a[j[r]].deadline!=r)
			r=r-1;
		
		if(a[j[r]].deadline<=a[i].deadline && a[i].deadline>r)
		{
			for(q=k;q>=r+1;q--)
					j[q+1]=j[q];
					
			j[r+1]=i;
			k=k+1;
			*tp=*tp+a[i].profit;
		}
	}
	
	return k;
}
