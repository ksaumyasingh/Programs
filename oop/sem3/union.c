#include<stdio.h>
#include<stdlib.h>

int simpleFind(int p[],int i)
{
	while(p[i]>=0)
		i=p[i];
	return i;	
}
void simpleUnion(int p[],int i,int j)
{
	p[i]=j;
}

void weightedUnion(int p[],int i,int j)
{
	int temp;
	temp=p[i]+p[j];
	if(p[i]>p[j])
	{
		p[i]=j;
		p[j]=temp;
	}
	else
	{
		p[j]=i;
		p[i]=temp;
	}
}
int collapsingFind(int p[],int i)
{
	int r ,s;
	r=i;
	while(p[r]>0)
		r=p[r];
	while(i!=r)
	{
		s=p[i];
		p[i]=r;
		i=s;
	}
	return r;
}
void main()//make program for simple find
{
	int a[50],n,s,i,j,choice;
	printf("\nenter the total no. of elements of all sets ");
	scanf("%d",&n);
	/*printf("\nenter the total no. of disjoint set present");
	scanf("%d",&s);*/
	for(i=1;i<=n;i++)
	{
		printf("if ele %d have root enter it else enter -1= ",i);
		scanf("%d",&a[i]);
	}
	do
	{
		printf("\n1.weightedUnion 2.simpleFind 3.collapsingFind 4.print");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("\nenter roots of tree whose union we want");
					scanf("%d",&i);
					scanf("%d",&j);
					weightedUnion(a,i,j);//simpleUnion(a,i,j)
					break;
			case 2:	
					printf("\nenter the node to simpleFind");
					scanf("%d",&i);
					printf("%d have root = %d",i,simpleFind(a,i));
					break;
			case 3:
					printf("\nenter the node to collapsingFind");
					scanf("%d",&i);
					printf("%d have root =%d ",i,collapsingFind(a,i));
					break;
			case 4:
					printf("\n output array is");
					for(i=1;i<=n;i++)
						printf("p[%d]  %d\n",i,a[i]);
					break;
			case 5:
					exit(0);
		}
	}
	while(1);
}
