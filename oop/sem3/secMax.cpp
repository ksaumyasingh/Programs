//Find 2nd highest element of an Array.
//Kumari Saumya Singh
//1913097
//date of creation: 10-01-2021


#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"enter list of "<<n<<" size";
	int list[n],i;
	for(i=0;i<n;i++)
		cin>>list[i];
	for(i=0;i<2;i++)
	{
		int m=list[i];
		int p;
		int j;
		for(j=i+1;j<n;j++)
			if(list[j]>m)
			{
				m=list[j];
				p=j;
			}
		int temp=list[i];
		list[i]=list[p];
		list[p]=temp;
	}
	cout<<"second maximum element is"<<list[1];
}
