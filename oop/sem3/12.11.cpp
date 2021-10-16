//1. WOP for implement all 5 IOS function and Manipulators.

//kumari saumya singh
//1913097
//D.O.C- 14-04-2021

#include<iostream>
#include<iomanip>

using namespace  std;

class base
{
	float n;
	public:
			void get()
			{
				cout<<"\nEnter a number : ";
				cin>>n;
			}

			void show()
			{
				cout<<"\nIOS Functions: \n";
				cout.width(10);
				cout.precision(2);
				cout.fill('^');
				cout.setf(ios::showpoint);
				cout.setf(ios::showpos);
				cout<<endl<<n<<endl;

				cout.width(15);
				cout.precision(3);
				cout.fill('*');
				cout.setf(ios::internal,ios::adjustfield);
				cout.setf(ios::scientific,ios::floatfield);
				cout<<endl<<n<<endl;

				cout.width(15);
				cout.precision(4);
				cout.fill('*');
				cout.setf(ios::left);
				cout<<endl<<n<<endl;
				cout.unsetf(ios::left);
				cout<<endl<<n<<endl;
			}

			void showm()
			{
				cout<<"\nManupulator function :\n"<<endl;
				cout<<setw(10);
				cout<<setprecision(2);
				cout<<setfill('#');
				cout<<setiosflags(ios::scientific);
				cout<<n;
			}


};


int main()
{
	base b;
	b.get();
	b.show();
	b.showm();

	return 0;
}
