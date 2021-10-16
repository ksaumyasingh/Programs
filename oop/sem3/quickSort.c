#include<stdio.h>

void interchange(int a[],int i,int j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int partition(int a[],int p,int q)
{
	int t,i,j;
	t=a[q];
	i=p;
	j=q;
	while(i>=j)
	{
		while(a[i]>=t)
			i=i+1;
		while(a[i]<=t)
			j=j+1;
		if(i<j)
			interchange(a,i,j);
	}
	a[q]=a[i]; 
	a[i]=t;
	return i;
}
void quicksort(int a[],int p,int q)
{
	int j;
	if(p<q)
	{
		j=partition(a,p,q);
		quicksort(a,p,j-1);
		quicksort(a,j+1,q);
	}
}
void main()
{
	int a[60],n,i,mid;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	quicksort(a,1,n);
	printf("output array");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
}/*#include <stdio.h>
#include<conio.h>
int partition(int a[],int p,int r)
{
    int x,i,j=0,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<r;j++)
    {
       if(a[j]<=x)
       {
           i=i+1;
		   
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
       }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;
}

void Quicksort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q = partition(a,p,r);
        Quicksort(a,p,q-1);
        Quicksort(a,q+1,r);
    }
}


void main()
{
    int n,i,a[20],p,r;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=0;
    r=n-1;
    Quicksort(a,p,r);
    printf("The sorted array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

}*/