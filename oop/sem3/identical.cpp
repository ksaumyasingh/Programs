// Read 10 identical / different  values (if user try to enter same value again prompt him / her to enter again)  in  array and print it.
//Kumari Saumya Singh
//1913097
//date of creation: 11-01-2021

#include<iostream>
using namespace std;
int main()
{
	/*int a[40],i,j=0,k=0,b[10];
	cout<<"enter array";*/
	/*for(i=0;k<10;i++)
	{
		cin>>a[i];
		if(i==0)
		{
			b[k]=a[i];
			k++;
		}
		else
		{
			int f=0;
			for(int l=0;l<k;l++)
				if(a[i]==b[l])
				{
					f=1;
					break;
				}
			if(f==0)
			{
				
				b[k]=a[i];
				k++;
			}
		}
	}*/
	/*cout<<"output";
	for(i=0;i<k;i++)
		cout<<b[i]<<" ";*/
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		int m=a[i];
		for(int j=0;j<i;j++)
			if(m==a[j])
			{
				i--;
				break;
			}
	}
	cout<<"output";
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
}