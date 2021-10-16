//Program to calculate sum of columns and diagonals of Matrix.
//Kumari Saumya Singh
//1913097
//date of creation: 10-01-2021


#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"enter the number of rows and column of matrix \n";
	cin>>m>>n;
	cout<<"enter matrix\n";
	int matrix[m][n],i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>matrix[i][j];
	cout<<"\nsum of diagonal:";
	int sum=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i==j)
				sum=sum+matrix[i][j];
		}
	cout<<sum;
	for(j=0;j<n;j++)
	{
		sum=0;
		for(i=0;i<m;i++)
		{
			sum=sum+matrix[i][j];
		}
		cout<<"\n sum of coloum "<<j+1<<":"<<sum;
	}	
}