//kumari saumya singh
//1913097
//D.O.C- 5-03-2021

#include<iostream>
using namespace std;
class Matrix
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

	void transpose()
	{
		cout<<"\n transpose matrix"<<endl;
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<=m-1;j++)
				cout<<a[j][i]<<" ";
			cout<<"\n";
		}		
				
	}
};
int main()
{
	Matrix m;
	m.read();
	m.print();
	m.transpose();
}
/*	void RowSum()
	{
		int sum;
		for(int i=0;i<=m-1;i++)
		{
			sum=0;
			for(int j=0;j<=n-1;j++)
				sum=sum + a[i][j];
			cout<<"sum of "<<i+1<<"th row elements :"<<sum<<endl;
		}
	}
	void columnSum()
	{
		int sum;
		for(int j=0;j<=n-1;j++)
		{
			sum=0;
			for(int i=0;i<=m-1;i++)
					sum=sum + a[i][j];
			cout<<"sum of "<<j+1<<"th column elements :"<<sum<<endl;
		}
	}


	m.RowSum();
	m.columnSum();*/