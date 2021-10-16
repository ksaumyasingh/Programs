//C++ program to design Login screen, check username and password.
//(Hint : if sucessful print some message if failed for then 3 times give message and then terminate).
//Kumari Saumya Singh
//1913097
//date of creation: 11-01-2021


#include<iostream>
using namespace std;
int main()
{
	string user_name="saumyasingh",username;
	string pass_word="abc123",password;
	int i=0;
	do
	{
		cout<<"enter username\n";
		cin>>username;
		cout<<"enter password\n";
		cin>>password;
		if(user_name!=username)
		{
			cout<<"incorrect user name\n";
			i++;
		}
		else if(pass_word!=password)
			{
				cout<<"incorrect password\n";
				i++;
			}
		if(i==0)
		{
			cout<<"login successful\n";
			return 0;
		}
	}
	while(i!=3);
	cout<<"\ntoo many attempts try again later";
	
}