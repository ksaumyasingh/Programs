#include<stdio.h>
#include<conio.h>

void Bknap(int k,float cp,float cw,float p[],float w[],int n,float m,float *fp,float *fw,int x[]);
float Bound(float cp,float cw,int k,float p[],float w[],int n,float m);

int main()
{
	float weight[10],profit[10],m;
	int i,j,id[10],n,x[10];
	float fp=0.0f,fw;
	
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
	
	Bknap(1,0,0,profit,weight,n,m,&fp,&fw,x);
	
	printf("\nTotal profit obtained= %f",fp);
	printf("\nTotal weight considered= %f",fw);
	
	
	
	return 0;
	
}

void Bknap(int k,float cp,float cw,float p[],float w[],int n,float m,float *fp,float *fw,int x[])
{
	int y[10],j;
	
	if( cw+w[k]<=m )
	{
		y[k]=1;
		
		if(k<n)
			Bknap(k+1,cp+p[k],cw+w[k],p,w,n,m,fp,fw,x);
		
		if(cp+p[k]>*fp && k==n)		
		{
			*fp=cp+p[k];
			*fw=cw+w[k];
			
			for(j=1;j<=k;j++)
				x[j]=y[j];
		}
		
	}
	
	if(Bound(cp,cw,k,p,w,n,m)>=*fp)
	{
		y[k]=0;
		
		if(k<n)
			Bknap(k+1,cp,cw,p,w,n,m,fp,fw,x);
		
		if(cp>*fp && k==n)		
		{
			*fp=cp;
			*fw=cw;
			
			for(j=1;j<=k;j++)
				x[j]=y[j];
		}
	}
	
		
}

float Bound(float cp,float cw,int k,float p[],float w[],int n,float m)
{
	float np,nw;
	int i;
	
	np=cp;
	nw=cw;
	
	for(i=k+1;i<=n;i++)
	{
		nw=nw+w[i];
		
		if(nw<m)
			np=np+p[i];
			
		else
			return np+(1-(nw-m)/w[i])*p[i];
	}
	
	return np;
}
