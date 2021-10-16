#include<conio.h>
#include<stdio.h>

int partition(int a[],int p,int q);
void quickSort(int a[],int p,int q);
void interchange(int a[],int i,int j);


int main()
{
	int a[20],i,n,x,f,l;
	
	printf("Enter number of elements= ");
	scanf("%d",&n);
	printf("Enter elements= ");
	
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	a[n+1]=9999;
		
	quickSort(a,1,n);
	
	printf("Sorted array is: ");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	
	return 0;
	
}

void quickSort(int a[],int p,int q)
{
	int j;
	
	if(p<q)
	{
		j=partition(a,p,q+1);
		printf("%d",j);
		
		quickSort(a,p,j-1);
		quickSort(a,j+1,q);
		
		
	}
}

int partition(int a[],int p,int q)
{
	int t=a[p],i=p,j=q;
	do
	{
		do
		{
			i++;
		}while(a[i]<t);
		
		do
		{
			j--;
		}while(a[j]>t);
		
		if(i<j)
			interchange(a,i,j);
		
	}while(i<j);
	
	a[p]=a[j];
	a[j]=t;
	
	return j;
	
}

void interchange(int a[],int i,int j)
{
	int temp;
	
	
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}