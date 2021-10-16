//WOOP for Calculator Class for performing Mathematical operations over Different Data types.

//kumari saumya singh
//1913097
//D.O.C- 22-04-2021

#include<iostream>

using namespace std;

template <class T>

class Calculator
{
	T num1,num2;
	
	public:
		
		Calculator(T n1,T n2)
		{
			num1 = n1;
			num2 = n2;
		}
		
		void Result()
		{
			cout<<"\nNumbers are: "<<num1<<"   "<<num2;
			cout<<"\nAftre Addition : "<<add();
			cout<<"\nAfter Subtraction : "<<subtract();
			cout<<"\nAftre Multiplication : "<<multiply();
			cout<<"\nAfter Division : "<<divide();
		}
		
		
		T add()
		{
			return (num1+num2);
		}
		
		
		T subtract()
		{
			return(num1-num2);
		}
		
		
		T multiply()
		{
			return(num1*num2);
		}
		
		
		T divide()
		{
			return(num1/num2);
		}
};

int main()
{
	Calculator<int> intCalc(10,5);
	Calculator<float> floatCalc(3.6,2.4);
	
	cout<<"\nOperations on Integer : "<<endl;
	intCalc.Result();
	
	cout<<"\n\nOperations on Float :\n";
	floatCalc.Result();
	
	return 0;
	
 }
