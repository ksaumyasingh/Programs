//WOP with DISPLAY function Template Display two Values of generic type.

//kumari saumya singh
//1913097
//D.O.C- 22-04-2021


#include<iostream>
#include<string.h>


using namespace std;


template<class t,class s>
void display(t a,s b)
{
	cout<<"\nDisplaying Values of different generic type "<<a<<"     "<<b;
	
}

int main()
{
	display(4.5,2);
	
	display('A',2.344);
	
	
	
	return 0;
}