#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void matrixMUL(int a[10][10],int b[10][10],int c[10][10]int n,int m,int q)
{
	int i ,j,k;
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
}
void main()
{
	int i,j,a[10][10],b[10][10],c[10][10],m,n,p,q;
	printf("enter rows & col. of matrix 1\n");
	scanf("%d%d",&m,&n);
	printf("enter rows & col. of matrix 2\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("mul not possible");
		exit(0);
	}
	printf("matrix 1\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("matrix 2\n");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
	matrixMUL(a,b,c,m,n,q);	
	printf("result\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
			printf(" %d ",c[i][j]);
		printf("\n");
	}
}