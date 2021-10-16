//Program To calculate the electricity bill when the condition of meter reading are: units less than 1002.25, 100-200  3.00, 200-5004.25 and above 7.00Rs.
//Kumari Saumya Singh
//1913097
//date of creation: 07-01-2021


#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"electricity bill:";
	if(n<100)
		cout<<"2.25";
	else if(n>100&&n<200)
			cout<<"3.00Rs";
		else if(n>200&&n<300)
				cout<<"4.25Rs";
			else
				cout<<"7.00Rs";
	return 0;	
}