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
void goTORowCol(int row_position,int col_position)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    int x_position=col_position,y_position=row_position;
    COORD screen;
	HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	screen.X=x_position;
	screen.Y=y_position;
	SetConsoleCursorPosition(hOutput,screen);
}
void title(string myText)
{
	string line;
	line=myText;
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	system("CLS");
	SetConsoleTextAttribute(h,14);
	goTORowCol(1,40);
	cout<<line<<endl;
	goTORowCol(2,1);
	for(int i=1;i<100;i++)
		printf("-");
	goTORowCol(3,1);
}
int time1(int f=0)
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int day=timePtr->tm_mday;
    int month=(timePtr->tm_mon)+1;
    int year=(timePtr->tm_year);
    if(f==1)
        return month;
	if(f==2)
		return year;
    return day;
}
void wroung()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	system("CLS");
	SetConsoleTextAttribute(h,13);
	goTORowCol(2,40);
	cout<<"Error! wroung input"<<"\n\n\n\n\n";
	SetConsoleTextAttribute(h,11);
}
// A Function to generate a unique OTP everytime
string generateOTP()
{
    // All possible characters of my OTP
    string str = "0123456789";
    int n = str.length();

    // String to hold my OTP
    string OTP;

    for (int i=1; i<=4; i++)
        OTP.push_back(str[rand() % n]);

    return(OTP);
}
//  intToStringConversion FUCTION CONVERTS INTEGER TO STRING like "1"->1.
string intToStringConversion(int num)
{
    // declaring output string stream
    ostringstream str1;

    // Sending a number as a stream into output
    // string
    str1 << num;

    // the str() coverts number into string
    string x = str1.str();
    return x;
}
//  stringToIntConversion FUCTION CONVERTS STRING TO INTEGER like "1"->1.
int stringToIntConversion(string s)
{
	stringstream s1(s);
	int x=0;
	s1>>x;
	return x;
}
void copyFile()
{
    string row;
    ofstream Hospital("Hospital.txt");
    ifstream Midiator("Midiator.txt");
    while (getline (Midiator, row))
    {
        Hospital<<row<<"\n";
    }
    Hospital.close();
    Midiator.close();
}
void intStringCheck(string str,int l,int *f)
{
	*f=0;
	int length=str.size();
	if(length!=l)
	{
		wroung();
		*f=1;
	}
	else
	{
		for(int i=0;i<=9;i++)
			if((str[i]<48&&str[i]>57)&&str[1]==0)
			{
				wroung();
				*f=1;
			}
	}
}
//  breakStringBySpace FUCTION BREAKS STRING BY SPACE
string breakStringBySpace(string myText,int f=0)
{
	string line ;
	line=myText;
    vector <string> tokens;
    stringstream check1(line);
    string intermediate;
    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
	return tokens[f];
}
class User
{
	protected:
		string aadharno,age,name;
	public:
	int isPhoneNoPresent(string phoneno)
 	{
		string row;
		ifstream adharcard("adharcard.txt");
		while (getline (adharcard, row))
		{
			string str=breakStringBySpace(row,3);
			if(phoneno==str)
				return 1;
		}
		adharcard.close();
		return 0;
	}
	void getInfo()
	{
		int f;
		ofstream adharcard("adharcard.txt",ios::app);
		M:cout<<"\n enter you adhar card number(eg 123456789111) : ";
		cin>>aadharno;
		intStringCheck(aadharno,12,&f);
		if(f==1)
			goto M;
		cout<<"\n enter you name : ";
		cin>>name;
		cout<<"\n enter your age : ";
		cin>>age;
		int AGE=stringToIntConversion(age);
		if(AGE>=45)
		{
			adharcard<<aadharno<<" ";
			adharcard<<name<<" ";
			adharcard<<age<<" ";
		}
		else
		{
			cout<<"\n your age is below the age for vaccination ";
			system("CLS");
			goto M;
		}
		adharcard.close();
	}
	void displayFileInfo(string aadharno,int f=0)
	{
		string row;
		HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
		ifstream adharcard("adharcard.txt");
		while (getline (adharcard, row))
		{
			if(aadharno==breakStringBySpace(row)||aadharno==breakStringBySpace(row,3))
			{
				cout<<"\n ADHARCARD NUMBER : "<<breakStringBySpace(row);
				cout<<"\n NAME             : "<<breakStringBySpace(row,1);
				cout<<"\n AGE              : "<<breakStringBySpace(row,2);
				if(f==1)
				{
					cout<<"\n MOBILE NUMBER    : "<<breakStringBySpace(row,3);
					cout<<"\n REFERENCE NUMBER : "<<breakStringBySpace(row,4);
				}
			}
		}
		adharcard.close();
	}
};
class Login:public User
{
	protected:
		string phoneno,refid;
	public:
		void get_phoneno()
		{
			int f;
			L:cout<<"\n\n Enter your mobile number(eg:1234567898) : ";
			cin>>phoneno;
			intStringCheck(phoneno,10,&f);
			if(f==1)
			{
				goto L;
			}
		}
		void generateRefid()
		{
			srand(time(NULL));
			refid=generateOTP().c_str();
			cout<<"Your REFERENCE ID is "<<refid;
			title("co-Win");
		}
		void display()
		{
			if(isPhoneNoPresent(phoneno))
			{
				displayFileInfo(phoneno);
				cout<<"\n MOBILE NUMBER    : "<<phoneno;
				cout<<"\n REFERENCE NUMBER : "<<refid<<"\n\n\n\n";
			}
			else
			{
			    generateRefid();
				ofstream adharcard("adharcard.txt",ios::app);
				getInfo();
				adharcard<<phoneno<<" ";
				adharcard<<refid<<"\n";
				adharcard.close();
			}
		}
		void displayRegisteredinfo()
		{
			displayFileInfo(phoneno,1);
		}
};
class Hospital
{
	public:
		void displayHospital(string pinDist)
		{
			cout.setf(ios::left);
			cout<<"\t\t\t\tavailable dates of month="<<time1(1);
			cout<<"\n"<<"refno"<<"     Hospital_name        "<<"Type"<<" : "<<setw(3)<<time1()<<setw(3)<<time1()+1<<setw(3)<<time1()+2<<setw(3)<<time1()+3<<"(Apr)";
			for(int i=1;i<100;i++)
				printf("-");
			string row;
			ifstream Hospital("Hospital.txt");
			while (getline (Hospital, row))
			{
				if(pinDist==breakStringBySpace(row)||pinDist==breakStringBySpace(row,2))
				{
					cout<<"\n\n"<<setw(3)<<breakStringBySpace(row,1)<<"   "<<setw(25)<<breakStringBySpace(row,3)<<setw(5)<<breakStringBySpace(row,4)<<" : "<<setw(3)<<breakStringBySpace(row,5);
					cout<<setw(3)<<breakStringBySpace(row,6)<<setw(3)<<breakStringBySpace(row,7)<<setw(3)<<breakStringBySpace(row,8);
				}
			}
			Hospital.close();
		}
		void updateHospitalEntries(string refno,int day)
		{
			string row;
			ofstream Appointment("appointment.txt",ios::app);
			ifstream Hospital("Hospital.txt");
			ofstream Midiator("Midiator.txt");
			while (getline (Hospital, row))
			{
				if(refno==breakStringBySpace(row,1))
				{
					int index=5+day-time1();

					for(int i=0;i<=8;i++)
					{
						if(i<5)
						{
							Appointment<<breakStringBySpace(row,i)<<" ";
						}
						if(i==index)
						{
							int y=stringToIntConversion(breakStringBySpace(row,i));
							y--;
							Midiator<<intToStringConversion(y)<<" ";
						}
						else
						{
							Midiator<<breakStringBySpace(row,i)<<" ";
						}
					}
				}
				else
					Midiator<<row;
				Midiator<<"\n";
			}
			Hospital.close();
			Midiator.close();
			copyFile();
		}
};
class Appointment
{
	public:
		int isAppointmentPresent(string adharno)
		{
			string row;
			ifstream Appointment("appointment.txt");
			while (getline (Appointment, row))
			{
				string str=breakStringBySpace(row,6);
				if(adharno==str)
					return 1;
			}
			Appointment.close();
			return 0;
		}
		void selectSlot(int slot=1)
		{
			ofstream Appointment("appointment.txt",ios::app);
			if(slot==1)
			{
				Appointment<<"09:00AM-11:00AM"<<" ";
			}
			else if(slot==2)
				{
					Appointment<<"11:00AM-01:00PM"<<" ";
				}
				else if(slot==3)
					{
						Appointment<<"01:00PM-03:00PM"<<" ";
					}
					else if(slot==4)
						{
							Appointment<<"03:00PM-05:00PM"<<" ";
						}
			Appointment.close();
		}
		void appointmentSlip(string adharno)
		{
			system("CLS");
			string row;
			ifstream Appointment("appointment.txt");
			while (getline (Appointment, row))
			{
				if(adharno==breakStringBySpace(row,6))
				{
					title("APPOINTMENT DETAILS");
					// adharno pin refid city name hwc time
					goTORowCol(4,40);
					cout<<"\n Hospital Details";
					goTORowCol(5,1);
					cout<<"\n\nrefid    : "<<breakStringBySpace(row,1);
					cout<<"\nName     : "<<breakStringBySpace(row,3);
					cout<<"("<<breakStringBySpace(row,4);
					cout<<")"<<"\nDistrict : "<<breakStringBySpace(row,2);
					cout<<"\nTime     : "<<breakStringBySpace(row,5);
					cout<<"\n Date   : "<<breakStringBySpace(row,7)<<"/"<<time1(1)<<"/"<<time1(2);
					cout<<"\n\n\n";
					for(int i=1;i<100;i++)
						printf(".");
					goTORowCol(12,40);
					cout<<"\n Individual Details";
					goTORowCol(14,1);
					cout<<"\nAadharcard number : "<<adharno;
					cout<<"\nPhoto ID to carry : Aadhar Card"<<endl;
					cout<<"\n\n\n";
				}
			}
			Appointment.close();
		}
};
class BookYourAppointment:public User,public Hospital,public Appointment
{
	protected:
		string pincode,district,refno;
		int day,slot;
	public:
		void get_pincode()
		{
			system("CLS");
			cout<<"available pincodes are:\n841301\t\t334001\t\t800001\n\n";
			cout<<"enter pincode : ";
			cin>>pincode;
			system("CLS");
		}
		void get_district()
		{
			system("CLS");
			cout<<"available districts are:\nSaran\t\tBikaner\t\tPatna\n\n";
			cout<<"enter district : ";
			cin>>district;
		}
		void display_B(string aadharno)
		{
			if(isAppointmentPresent(aadharno))
			{
				cout<<"\n appointment is already scheduled \n";
			}
			else
			{
				ofstream Appointment("appointment.txt",ios::app);
				Appointment<<aadharno<<" ";
				HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
				title("SEARCH HOSPITALS");
				cout<<"1. pincode            2.district\n\n"<<endl;
				SetConsoleTextAttribute(h,7);
				cout<<"enter choice : "<<endl;
				int choice;
				cin>>choice;
				    if(choice==1)
				{
					get_pincode();
					displayHospital(pincode);
				}
				else if(choice==2)
					{
						get_district();
						displayHospital(district);
					}
					else
						wroung();
				SetConsoleTextAttribute(h,11);
				cout<<"\n\n\nenter refno of selected hospital and selected day: ";
				cin>>refno;
				cin.ignore();
				cin>>day;
				Appointment<<day<<"\n";
				updateHospitalEntries(refno,day);
				title("Time Slot Selection");
				cout<<"\n1.09:00AM - 11:00AM \n2.11:00AM - 01:00PM \n3.01:00PM - 03:00PM \n4.03:00PM - 05:00PM"<<endl;
				cout<<"\n\n\nselect your slot : "<<endl;
				cin>>slot;
				selectSlot(slot);
				goTORowCol(230,40);
				SetConsoleTextAttribute(h,10);
				cout<<"YOUR APPOINTMENT IS CONFIRMED!";
				SetConsoleTextAttribute(h,14);
				Appointment.close();
			}
		}
};
int main()
{
	Login s1;
	BookYourAppointment b1;
	title("LOGIN");
	s1.get_phoneno();
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	ofstream Hospital("Hospital.txt");
        Hospital<<"841301 111 Saran Apollo HWC 5 5 5 5";
        Hospital<<"\n841301 121 Saran Sarojni DH 3 3 3 3";
        Hospital<<"\n334001 131 Bikaner Amritkaur HWC 5 5 5 5";
        Hospital<<"\n334001 141 Bikaner Apollo HWC 5 5 5 5";
        Hospital<<"\n800001 151 Patna Sarojni DH 3 3 3 3";
        Hospital<<"\n800001 156 Patna MahatmaGandhi HWC 2 2 2 2";
        cout<<Hospital.tellp();
    Hospital.close();
	do
	{
		title("co-Win");
		cout<<"\n\n1.Registration() \n2.display registered info\n3.book your appointment(vaccination) \n4.view your AppointmentDetails \n5.number of vaccinated person \n6.logout"<<endl;
		int ch;
		cin>>ch;
		if(ch==1)
			s1.display();
		else if(ch==2)
				s1.displayRegisteredinfo();
			else if(ch==3)
				{
					cout<<"\n enter you adhar card number : ";
                    string adharno;
                    cin>>adharno;
					b1.display_B(adharno);
				}
				else if(ch==4)
					{
					    cout<<"\n enter you adhar card number : ";
                        string adharno;
                        cin>>adharno;
					    b1.appointmentSlip(adharno);
					}
					else if(ch==5)
						{
							exit(0);
						}
						else
						{
							wroung();
						}
						char holdScreen;
						cout<<"\n\n\n\n\n\n\n press any key to continue";
						cin>>holdScreen;
						system("CLS");
	}while(1);
	return 0;
}
