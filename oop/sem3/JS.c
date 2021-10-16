#include<stdio.h>
#include<conio.h>
int JS(int j[],int d[],int n,int p[],int *tp)
{
	int i,r,k,q;
	d[0]=j[0]=0;
	j[1]=k=1;
	*tp=*tp+p[j[1]];
	for(i=2;i<=n;i++)
	{
		r=k;
		while((d[j[r]]>d[i])&&d[j[r]]!=r)
			r=r-1;
		if((d[j[r]]<=d[i])&&(d[i]>r))
		{
			for(q=k;q>=r+1;q--)
				j[q+1]=j[q];
			j[r+1]=i;
			*tp=*tp+p[j[r+1]];
			k=k+1;
		}
	}
	return k;
}

void main()
{
	int j[20],d[20],p[20],totalProfit=0,n,i,k;
	printf("enter the total no. of jobs");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("enter profit (decreasing order) with deadlines respectively %d : ",i);
		scanf("%d%d",&p[i],&d[i]);
	}
	
	printf("\n profit   ");
	for(i=1;i<=n;i++)
	{
		printf("%d  ",p[i]);
	}
	
	printf("\n deadline ");
	for(i=1;i<=n;i++)
	{
		printf("%d  ",d[i]);
	}
	
	k=JS(j,d,n,p,&totalProfit);
	
	printf("\ntotalProfit= %d",totalProfit);
	
	printf("\n job sequence :  ");
	for(i=1;i<=k;i++)
	{
		printf("%d  ",j[i]);
	}
}