#include<iostream>
using namespace std;
int main()
{
	/*int x=10;
	int &y=x;
	y=20;
	cout<<x;
	x=30;
	cout<<y;*/
	int A[]={3,7,1,8,-4,6};
	int &R=A[0];
	//R[1]=R[1]+9;
	cout<<*(&R+2);
	/*int i=10;
	cout<<i<<endl;
	int &y;
	y=8;
	int &z=i;
	z=9;
	int &x=19;
	x=x+1;
	cout<<"i,y,z,x"<<i,y,z,x;*/
	
}