#include<stdio.h>
void MaxMin(int a[],int i,int j,int max,int min)
{
	if(i==j)
		max=min=a[i];
	else
		 if(i==j-1)
		 {
			 if(a[i]<a[j]);
			 {
				 max=a[j];
				 min=a[i];
			 }
			 else
			 {
				 max=a[i];
				 min=a[j];
			 }
			 
		 }
		 else
		 {
		 }
}
void main()
{
	int A[20],min,max,n,i;
	printf("\nenter the size of array");
	scanf("%d",&n);
	printf("\nenter array");
	for(i=0;i<=n-1;i++)
		scanf("%d",&A[i]);
}
