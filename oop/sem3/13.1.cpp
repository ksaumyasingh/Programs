//WOP with generic SUM function for sumation of int, double, float etc.

//kumari saumya singh
//1913097
//D.O.C- 22-04-2021

#include<iostream>
#include<string.h>


using namespace std;

template<class t>
t sum(t a,t b)
{
	return a+b;
}

template<class t>
void display(t a)
{
	cout<<"Number= "<<a;
}

int main()
{
	int a,b;
	float c,d;
	double e,f;
	
	cout<<"Enter two integer for summation= ";
	cin>>a>>b;
	cout<<"After summation= "<<sum(a,b)<<endl;
	display(a);
	cout<<"\t";
	display(b);
	
	cout<<endl<<"Enter two float for summation= ";
	cin>>c>>d;
	cout<<"After summation= "<<sum(c,d);
	
	cout<<endl<<"Enter two double for summation= ";
	cin>>e>>f;
	cout<<"After summation= "<<sum(e,f);
	
	
	return 0;	
	
	
	
	
}
