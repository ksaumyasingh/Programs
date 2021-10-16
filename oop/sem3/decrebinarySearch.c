#include<stdio.h>
int BinarySearch(int A[], int l, int r, int key) 
{ 
    int m; 
  
    while( r - l > 1 ) 
    { 
        m = l + (r-l)/2; 
  
        if( A[m] <= key ) 
            l = m; 
        else
            r = m; 
    } 
  
    if( A[l] == key ) 
        return l; 
    if( A[r] == key ) 
        return r; 
    else
        return -1; 
} 
int BinSrch(int a[],int low,int high,int x)
{
	int mid;
	if(low>high)
		return 0;
	mid=(low+high)/2;
	return(a[mid]==x?mid:a[mid]<x?BinSrch(a,low,mid-1,x):BinSrch(a,mid+1,high,x));
}
/*void main()
{
	int a[60],x,n,i,mid;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter sorted array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("enter ele to be searched");
	scanf("%d",&x);
	
	mid=BinSrch(a,1,n,x);//binarySearch(a,n,x);//binSrch(a,1,n,x);
	
	if(mid==0)
		printf("ele not present in the list");
	else
		printf("ele present at %d loction",mid);
}*/
void main()
{
	int a[60],x,n,i,mid;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter sorted array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("enter ele to be searched");
	scanf("%d",&x);
	
	mid=BinarySearch(a,1,n,x);//binarySearch(a,n,x);//binSrch(a,1,n,x);
	
	if(mid==-1)
		printf("ele not present in the list");
	else
		printf("ele present at %d loction",mid);
}