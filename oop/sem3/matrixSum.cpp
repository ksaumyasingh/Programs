//kumari saumya singh
//1913097
//D.O.C- 22-02-2021

#include<iostream>
using namespace std;
class matrix;
class matrix
{
	private:int a[10][10],m,n;
	public:
	void read()
	{
		cout<<"\nenter no. of rows and column of matrix"<<endl;cin>>m>>n;
		cout<<"\nenter matrix"<<endl;
		for(int i=0;i<=m-1;i++)
			for(int j=0;j<=n-1;j++)
				cin>>a[i][j];
	}
	void print()
	{
		cout<<"\nmatrix"<<endl;
		for(int i=0;i<=m-1;i++)
		{
			for(int j=0;j<=n-1;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	}
	friend void sum(matrix ,matrix );
};
void sum(matrix m1,matrix m2)
{
	cout<<"matrix after sum"<<endl;
	for(int i=0;i<=m1.m-1;i++)
		{
			for(int j=0;j<=m1.n-1;j++)
				cout<<m1.a[i][j]+m2.a[i][j]<<" ";
			cout<<"\n";
		}
}
int main()
{ 
	matrix m1,m2,p;
	m1.read();
	m2.read();
	sum(m1,m2);
}