#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void adjust(int [],int,int);
void sort(int [],int);
void heapify(int [],int);
void heapsort(int [],int);
void insert(int a[],int n)
{
	int i,item;
	i=n;
	item=a[n];
	while((i>1)&&(a[i/2]<item))
	{
		a[i]=a[i/2];
		i=i/2;
	}
	a[i]=item;
}
void delMax(int a[],int *n,int *x)
{
	if(*n==0)
	{
		printf("heap is empty");
		return;
	}
	*x=a[1];
	a[1]=a[*n];
	--(*n);
	adjust(a,1,*n);
}
void adjust(int a[],int i,int n)
{
	int item,j;
	item=a[i];
	j=2*i;
	while(j<=n)
	{
		if((j<n)&&(a[j]<a[j+1]))
			j=j+1;
		if(item>=a[j])
			break;
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=item;
}
void heapify(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		adjust(a,i,n);
}
void sort(int a[],int n)
{
	int x,i;
	for(i=1;i<=n;i++)
		insert(a,i);
	for(i=n;i>=1;)
	{
		delMax(a,&i,&x);
		a[i+1]=x;
	}
}
void heapsort(int a[],int n)
{
	int i,t;
	heapify(a,n);
	for(i=n;i>=2;i--)
	{
		t=a[i];
		a[i]=a[1];
		a[1]=t;
		adjust(a,1,i-1);
	}
}
/*void main()
{
	int a[30],n,x,i;
	printf("enter the size of list\n");
	scanf("%d",&n);
	printf("enter the elements of list\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	printf("sorted list is\n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}

}*/
void main()
{
	int a[30],n,x,i;
	printf("enter the size of list\n");
	scanf("%d",&n);
	printf("enter the elements of list\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	heapsort(a,n);// increasing order
	printf("sorted list is\n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}

}
/*void main()
{
	int a[30],n,x,i;
	printf("enter the size of list\n");
	scanf("%d",&n);
	printf("enter the elements of list\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		insert(a,i);
	}
	printf("created heap is\n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	} 
	delMax(a,&n,&x);
	if(n!=0)
		printf("deleted element = %d",x);

}*/