//kumari saumya singh
//1913097
//D.O.C- 19-01-2021


#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	int &r=a[0];
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter array"<<endl;
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	cout<<"array"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<*(&r+i)<<" ";
	return 0;
}