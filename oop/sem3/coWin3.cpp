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
    if(f==1)
        return month;
    return day;
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

//  stringToIntConversion FUCTION CONVERTS STRING TO INTEGER like "1"->1.
int stringToIntConversion(string s)
{
	stringstream s1(s);
	int x=0;
	s1>>x;
	return x;
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
void selectSlot(int slot=1)
{
	ofstream Appointment("appointment.txt",ios::app);
    if(slot==1)
    {
		Appointment<<"09:00AM-11:00AM"<<"\n";
	}
	else if(slot==2)
		{
			Appointment<<"11:00AM-01:00PM"<<"\n";
		}
        else if(slot==3)
			{
				Appointment<<"01:00PM-03:00PM"<<"\n";
			}
			else if(slot==4)
				{
					Appointment<<"03:00PM-05:00PM"<<"\n";
				}
	Appointment.close();
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
void stringDetails(string adharno)
{
    string row;
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    ifstream adharcard("adharcard.txt");
    while (getline (adharcard, row))
	{
	    if(adharno==breakStringBySpace(row)||adharno==breakStringBySpace(row,1))
        {
			title("REGESTERED DETAILS");
			goTORowCol(3,40);
			cout<<"\n ADHARCARD NUMBER : "<<breakStringBySpace(row);
			cout<<"\n MOBILE NUMBER    : "<<breakStringBySpace(row,1);
			cout<<"\n REFERENCE NUMBER : "<<breakStringBySpace(row,2);
			cout<<"\n NAME             : "<<breakStringBySpace(row,3);
			cout<<"\n AGE              : "<<breakStringBySpace(row,4);
			goTORowCol(11,1);
			for(int i=1;i<100;i++)
			printf("-");
			SetConsoleTextAttribute(h,14);
        }
	}
	adharcard.close();
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
void appointmentSlip(string adharno)
{
    system("CLS");
	string row,row2;
	ifstream Appointment("appointment.txt");
    while (getline (Appointment, row))
	{
		if(adharno==breakStringBySpace(row))
		{
			title("APPOINTMENT DETAILS");
			// adharno pin refid city name hwc time
			goTORowCol(4,40);
			cout<<"\n Hospital Details";
			goTORowCol(5,1);
			cout<<"\n\nrefid    : "<<breakStringBySpace(row,2);
			cout<<"\nName     : "<<breakStringBySpace(row,4);
			cout<<"("<<breakStringBySpace(row,5);
			cout<<")"<<"\nDistrict : "<<breakStringBySpace(row,3);
			cout<<"\nTime     : "<<breakStringBySpace(row,6);
			cout<<"\n\n\n";
			for(int i=1;i<100;i++)
				printf(".");
			goTORowCol(12,40);
			cout<<"\n Individual Details";
			goTORowCol(14,1);
			ifstream adharcard("adharcard.txt");
			while (getline (adharcard, row2))
			{
				if(adharno==breakStringBySpace(row))
				{
					cout<<"\nAadharcard number : "<<adharno;
					cout<<"\nReference ID 	   : "<<breakStringBySpace(row,2);
					cout<<"\nPhoto ID to carry : Aadhar Card"<<endl;
				}
			}
			adharcard.close();
			cout<<"\n\n\n";
		}
	}
	Appointment.close();
}
int isStringPresent(string adharno)
{
	string row;
	ifstream adharcard("adharcard.txt");
	while (getline (adharcard, row))
	{
		string str=breakStringBySpace(row,1),str1=breakStringBySpace(row);
		cout<<endl<<str<<" "<<str1<<endl;
		if(adharno==str||adharno==str1)
			return 1;
	}
	adharcard.close();
	return 0;
}
int appointmentSchedule(string adharno)
{
	string row;
	ifstream Appointment("appointment.txt");
	while (getline (Appointment, row))
	{
		string str=breakStringBySpace(row);
		cout<<endl<<str<<endl;
		if(adharno==str)
			return 1;
	}
	Appointment.close();
	return 0;
}
void bookYourAppointment(string adharno)
{
	ofstream Appointment("appointment.txt",ios::app);
	int p=appointmentSchedule(adharno);
	if(p)
	{
		stringDetails(adharno);
		int f=0;
		N:cout<<"\n1.appointment slip( YOUR appointment is already scheduled)\n2.back\n\n\nenter your choice : ";
		int ch;
		cin>>ch;
		if(ch==1)
		{
			appointmentSlip(adharno);
			return;
		}
		else if(ch==2)
			{
				return;
			}
			else
			{
				wroung();
				f=1;
			}
		if(f==1)
		{
			system("CLS");
			goto N;
		}

	}
	else
		Appointment<<adharno<<" ";
	system("CLS");
	goTORowCol(1,40);
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,11);
    cout<<"Book appointment for vaccination"<<endl;
    for(int i=1;i<100;i++)
        printf("-");
    goTORowCol(4,10);
    SetConsoleTextAttribute(h,7);
    cout<<"search hospital"<<endl;
    goTORowCol(5,1);
    SetConsoleTextAttribute(h,11);
    cout<<"1. pincode            2.district\n\n"<<endl;
    SetConsoleTextAttribute(h,7);
    cout<<"enter choice : "<<endl;
    int choice;
    cin>>choice;
    ofstream Hospital("Hospital.txt");
        Hospital<<"841301 111 Saran Apollo HWC 5 5 5 5";
        Hospital<<"\n841301 121 Saran Sarojni DH 3 3 3 3";
        Hospital<<"\n334001 131 Bikaner Amritkaur HWC 5 5 5 5";
        Hospital<<"\n334001 141 Bikaner Apollo HWC 5 5 5 5";
        Hospital<<"\n800001 151 Patna Sarojni DH 3 3 3 3";
        Hospital<<"\n800001 156 Patna MahatmaGandhi HWC 2 2 2 2";
        cout<<Hospital.tellp();
    Hospital.close();
    if(choice==1)
    {
                system("CLS");
                cout<<"available pincodes are:\n841301\t\t334001\t\t800001\n\n";
                cout<<"enter pincode : ";
                string pincode;
                cin>>pincode;
                system("CLS");
                displayHospital(pincode);
    }
	else if(choice==2)
		{
                system("CLS");
                cout<<"available districts are:\nSaran\t\tBikaner\t\tPatna\n\n";
                cout<<"enter district : ";
                string district;
                cin>>district;
                system("CLS");
                displayHospital(district);
        }
        else
		{
                goTORowCol(230,40);
                SetConsoleTextAttribute(h,10);
                cout<<"error! wroung input"<<endl;
        }
    SetConsoleTextAttribute(h,11);
    cout<<"\n\n\nenter refno of selected hospital and selected day: ";
    string refno;
	int day;
    cin>>refno;
    cin.ignore();
    cin>>day;
    updateHospitalEntries(refno,day);
    system("CLS");
    goTORowCol(1,40);
    cout<<"\n Time slot selection : "<<endl;
    for(int i=1;i<100;i++)
		printf("-");
    cout<<"\n1.09:00AM - 11:00AM \n2.11:00AM - 01:00PM \n3.01:00PM - 03:00PM \n4.03:00PM - 05:00PM"<<endl;
    cout<<"\n\n\nselect your slot : "<<endl;
    int slot;
    cin>>slot;
	selectSlot(slot);
    goTORowCol(230,40);
    SetConsoleTextAttribute(h,10);
    cout<<"YOUR APPOINTMENT IS CONFIRMED!";
    SetConsoleTextAttribute(h,14);
	Appointment.close();
}
int main()
{
	int f;
	string phoneNumber,refid;
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	title("LOGIN");
    L:cout<<"\n\n Enter your mobile number(eg:1234567898) : ";
    cin>>phoneNumber;
	intStringCheck(phoneNumber,10,&f);
	cout<<"\nf is "<<f<<endl;;
	if(f==1)
	{
		goto L;
	}
	cout<<"+";
	int p=isStringPresent(phoneNumber);
	if(p)
	{
		stringDetails(phoneNumber);
		string row;
		ifstream adharcard("adharcard.txt");
		while (getline (adharcard, row))
		{
			string str=breakStringBySpace(row,1);
			if(phoneNumber==str)
				refid=breakStringBySpace(row,2);
		}
		adharcard.close();
	}
	else
	{
		srand(time(NULL));
		refid=generateOTP().c_str();
		cout<<"Your REFERENCE ID is "<<refid;
		title("co-Win");
	}
	do
	{
		cout<<"\n\n1.Registration() \n2.display registered info\n3.book your appointment(vaccination) \n4.view your cirtificate \n5.number of vaccinated person \n6.logout"<<endl;
		int ch;
		cin>>ch;
		if(ch==1)
		{
			ofstream adharcard("adharcard.txt",ios::app);
			M:cout<<"\n enter you adhar card number(eg 123456789111) : ";
			string adharno;
			cin>>adharno;
			intStringCheck(adharno,12,&f);
			if(f==1)
				goto M;
			cout<<"\n enter you name : ";
			string name;
			cin>>name;
			cout<<"\n enter your age : ";
			string age;
			cin>>age;
			int AGE=stringToIntConversion(age);
			if(AGE>=45)
			{
				adharcard<<adharno<<" "<<phoneNumber<<" "<<refid<<" ";
				adharcard<<name<<" ";
				adharcard<<age<<"\n";
			}
			else
			{
				cout<<"\n your age is below the age for vaccination ";
				system("CLS");
				goto M;
			}
			adharcard.close();
		}
		else if(ch==2)
			{
				cout<<"\n enter you adhar card number : ";
				string adharno;
				cin>>adharno;
				stringDetails(adharno);
			}
			else if(ch==3)
				{
					cout<<"\n enter you adhar card number : ";
					string adharno;
					cin>>adharno;
					bookYourAppointment(adharno);
				}
				else if(ch==4)
					{
					    cout<<"\n enter you adhar card number : ";
                        string adharno;
                        cin>>adharno;
					    appointmentSlip(adharno);
					}
					else if(ch==5)
						{
							exit(0);
						}
						else
						{
							wroung();
						}
	}while(1);

}
