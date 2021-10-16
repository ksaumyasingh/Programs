#include<iostream>
using namespace std;
class Matrix
{int a[3][3];
  public:
    void accept();
    void display();
    void operator -();
    void operator +(Matrix);
};
void Matrix::accept()
{int i=0;
	cout<<"\nEnter Matrix elements in 3*3 matrix:\n\n";
	for(i=0;i<3;i++)++
	{
		for(int j=0;j<3;j++)
	    {
			cout<<"\n";
			cin>>a[i][j];
	    }
	}
}
void Matrix::display()
{
	cout<<"\nMatrix is:\n\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" ";
			cout<<a[i][j]<<"\t";
		}cout<<"\n";
	}
}
void Matrix::operator -()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j]=-a[i][j];
		}
	}
}
void Matrix::operator +(Matrix x)
{int mat[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			mat[i][j]=a[i][j]+x.a[i][j];
		}
	}
	cout<<"\nAddition of Matrices\n\n";
	for(int i=0;i<3;i++)
	{
		cout<<" ";
		for(int j=0;j<3;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{Matrix m,n;
int ch;
	do
	{
		cout<<"\n1.Enter elements of 1st Matrix.\n2.Enter elements of 2nd Matrix.\n3.Display the 1st Matrix.\n4.Display the 2nd Matrix.\n5.Binary +\n6.Unary(-) on 1st Matrix.\n7.Unary(-) on 2nd Matrix.\n8.Exit\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
		case 1:
			m.accept();
			break;
		case 2:
			n.accept();
			break;
		case 3:
			cout<<"\nFirst Matrix:\n\n";
			m.display();
			break;
		case 4:
			cout<<"\nSecond Matrix:\n\n";
			n.display();
			break;
		case 5:
			m+n;
			break;
		case 6:
			-m;
			break;
		case 7:
			-n;
			break;
		case 8:
			cout<<"Exit.\n";
		}
	}while(ch>=1&&ch<=7);
	return 0;
}