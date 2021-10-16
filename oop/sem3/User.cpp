#include <bits/stdc++.h>
#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
#include<cmath>
#include <ctime>
#include <sstream>
#include<iomanip>
#include<string.h>
using namespace std;
class User
{
	string name,age,adharnumber,mobileNo;
	public:
	static User getUser(string adharno)
	{
		User newUser;
		string row;
		HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
		ifstream adharcard("adharcard.txt");
		while (getline (adharcard, row))
		{
			if(adharno==breakStringBySpace(row)||adharno==breakStringBySpace(row,1))
			{
				newUser.adharnumber=breakStringBySpace(row);
				newUser.mobileNo=breakStringBySpace(row,1);
				newUser.name=breakStringBySpace(row,3);
				newUser.age=breakStringBySpace(row,4);
			}
		}
		adharcard.close();
		return newUser;
	}
	static int isUserPresent(string adharno)
	{
		string row;
		ifstream adharcard("adharcard.txt");
		while (getline (adharcard, row))
		{
		string str1=breakStringBySpace(row);
		cout<<endl<<str1<<endl;
		if(adharno==str1)
			return 1;
		}
		adharcard.close();
		return 0;
	}
	void registerUser()
	{
		
	}
};