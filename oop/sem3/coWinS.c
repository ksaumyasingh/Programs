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

void goTORowCol(int row_position,int col_position) //
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    int x_position=col_position,y_position=row_position;
    COORD screen;
	HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	screen.X=x_position;
	screen.Y=y_position;
	SetConsoleCursorPosition(hOutput,screen);
}

void title(string myText) //for highlighting the tittle
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

int time1(int f=0) //for time(in a hospital schedule file)
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

void wroung()  //output screen closes when we call it
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	system("CLS");
	SetConsoleTextAttribute(h,13);
	goTORowCol(2,40);
	cout<<"Error! wroung input"<<"\n\n\n\n\n";
	SetConsoleTextAttribute(h,11);
}

string generateOTP()  // A Function to generate a unique Refernce ID everytime
{
    string str = "0123456789";
    int n = str.length();

    string OTP;

    for (int i=1; i<=4; i++)
        OTP.push_back(str[rand() % n]);

    return(OTP);
}

string intToStringConversion(int num)  //  intToStringConversion FUCTION CONVERTS INTEGER TO STRING like "1"->1.
{
    ostringstream str1;

    str1 << num;

    string x = str1.str();
    return x;
}

int stringToIntConversion(string s)  //  stringToIntConversion FUCTION CONVERTS STRING TO INTEGER like "1"->1.
{
	stringstream s1(s);
	int x=0;
	s1>>x;
	return x;
}

void copyFile()  //copying the hospital.txt to midiator.txt
{
    string row;
    ofstream Hospital("Hospital.txt");
    ifstream Mediator("Mediator.txt");
    while (getline (Mediator, row))
    {
        Hospital<<row<<"\n";
    }
    Hospital.close();
    Mediator.close();
}

void intStringCheck(string str,int l,int *f)  //
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

string breakStringBySpace(string myText,int f=0)  //  breakStringBySpace FUCTION BREAKS STRING BY SPACE
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



class User  //CLASS User
{
	protected:
		string aadhaarno,age,name;
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
		ofstream aadhaarcard("aadhaarcard.txt",ios::app);
		M:cout<<"\n Enter you aadhaar card number((12 Digit Identification Number)eg 123456789111) : ";
		cin>>aadhaarno;
		intStringCheck(aadhaarno,12,&f);
		if(f==1)
			goto M;
		cout<<"\n Enter you name : ";
		cin>>name;
		cout<<"\n Enter your age : ";
		cin>>age;
		int AGE=stringToIntConversion(age);
		if(AGE>=45)
		{
			aadhaarcard<<aadhaarno<<" ";
			aadhaarcard<<name<<" ";
			aadhaarcard<<age<<" ";
		}
		else
		{
			cout<<"\n your age is below the age for vaccination ";
			system("CLS");
			goto M;
		}
		aadhaarcard.close();
	}
	void displayFileInfo(string aadhaarno,int f=0)
	{
		string row;
		HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
		ifstream aadhaarcard("aadhaarcard.txt");
		while (getline (aadhaarcard, row))
		{
			if(aadhaarno==breakStringBySpace(row)||aadhaarno==breakStringBySpace(row,3))
			{
				cout<<"\n AADHAARCARD NUMBER : "<<breakStringBySpace(row);
				cout<<"\n NAME             : "<<breakStringBySpace(row,1);
				cout<<"\n AGE              : "<<breakStringBySpace(row,2);
				if(f==1)
				{
					cout<<"\n MOBILE NUMBER    : "<<breakStringBySpace(row,3);
					cout<<"\n REFERENCE ID : "<<breakStringBySpace(row,4);
				}
			}
		}
		aadhaarcard.close();
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
			L:cout<<"\n\n Enter your mobile number((10 digit number)eg:1234567898) : ";
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
				cout<<"\n REFERENCE ID : "<<refid<<"\n\n\n\n";
			}
			else
			{
			    generateRefid();
				ofstream aadhaarcard("aadhaarcard.txt",ios::app);
				getInfo();
				aadhaarcard<<phoneno<<" ";
				aadhaarcard<<refid<<"\n";
				aadhaarcard.close();
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
			cout<<"\t\t\t\tAvailable dates of month for registration ="<<time1(1);
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
			ofstream Mediator("Mediator.txt");
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
							Mediator<<intToStringConversion(y)<<" ";
						}
						else
						{
							Mediator<<breakStringBySpace(row,i)<<" ";
						}
					}
				}
				else
					Mediator<<row;
				Mediator<<"\n";
			}
			Hospital.close();
			Mediator.close();
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
		int AppointmentCounter()
		{
			string row;
			int counter=0;
			ifstream Appointment("appointment.txt");
			while (getline (Appointment, row))
			{
				counter++;
			}
			Appointment.close();
			return counter;
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
		void appointmentSlip(string aadhaarno)
		{
			system("CLS");
			string row;
			ifstream Appointment("appointment.txt");
			while (getline (Appointment, row))
			{
				if(aadhaarno==breakStringBySpace(row,6))
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
					cout<<"\n Aadhaar Card number : "<<aadhaarno;
					cout<<"\nPhoto ID to carry : Aadhaar Card"<<endl;
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
			cout<<"Available pincodes are:\n841301\t\t334001\t\t800001\n\n";
			cout<<"Enter PINCODE : ";
			cin>>pincode;
			system("CLS");
		}
		void get_district()
		{
			system("CLS");
			cout<<"Available districts are:\nSaran\t\tBikaner\t\tPatna\n\n";
			cout<<"Enter DISTRICT : ";
			cin>>district;
		}
		void display_B(string aadhaarno)
		{
			if(isAppointmentPresent(aadhaarno))
			{
				cout<<"\n appointment is already scheduled \n";
			}
			else
			{
				ofstream Appointment("appointment.txt",ios::app);
				Appointment<<aadhaarno<<" ";
				HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
				title("SEARCH HOSPITALS");
				cout<<"1. PINCODE            2.DISTRICT \n\n"<<endl;
				SetConsoleTextAttribute(h,7);
				cout<<"Enter choice : "<<endl;
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
				cout<<"\n\n\n Enter refernce number of selected hospital and day: ";
				cin>>refno;
				cin.ignore();
				cin>>day;
				Appointment<<day<<"\n";
				updateHospitalEntries(refno,day);
				title("Time Slot Selection");
				cout<<"\n1.09:00AM - 11:00AM \n2.11:00AM - 01:00PM \n3.01:00PM - 03:00PM \n4.03:00PM - 05:00PM"<<endl;
				cout<<"\n\n\n Select your SLOT : "<<endl;
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

class certificate :public Login
{
	public:
	    void readphoneNo()
	    {
	        cout<<"\n Enter your registered phone number = ";
	        cin>>phoneno;
	    }
	    void certificateVaccination()
	    {


                    if(isPhoneNoPresent(phoneno))
                    {
                            displayFileInfo(aadhaarno);
                    }
                    else
                    {
                        cout<<"\n YOU ARE NOT VACCINATED ";
                    }
	    }

};
int main()
{
	Login s1;
	certificate c1;
	BookYourAppointment b1;
	title("LOGIN");
	s1.get_phoneno();
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	ofstream Hospital("Hospital.txt");
        Hospital<<"841301 111 Saran Apollo HWC 5 5 5 5";
        Hospital<<"\n841301 121 Saran Sarojni DH 3 3 3 3";
        Hospital<<"\n334001 131 Bikaner PBM  HWC 5 5 5 5";
        Hospital<<"\n334001 141 Bikaner Apollo HWC 5 5 5 5";
        Hospital<<"\n800001 151 Patna Sarojni DH 3 3 3 3";
        Hospital<<"\n800001 156 Patna MahatmaGandhi HWC 2 2 2 2";
        cout<<Hospital.tellp();
    Hospital.close();
	do
	{
		title("co-Win");
		cout<<"\n\n1.Registration() \n2.display registered info\n3.book your appointment(vaccination) \n4.view your AppointmentDetails \n5.number of vaccinated person \n6.Vaccination Certificate /n7.logout"<<endl;
		int ch;
		cin>>ch;
		if(ch==1)  //Registration
			s1.display();
		else if(ch==2) //display registered info
				s1.displayRegisteredinfo();
			else if(ch==3)  //book your appointment(for vaccination)
				{
					cout<<"\n enter you Aadhaar Card Number : ";
                    string aadhaarno;
                    cin>>aadhaarno;
					b1.display_B(aadhaarno);
				}
				else if(ch==4)  //view your AppointmentDetails
					{
					    cout<<"\n enter you Aadhaar Card Number: ";
                        string aadhaarno;
                        cin>>aadhaarno;
					    b1.appointmentSlip(aadhaarno);
					}
					else if(ch==5)  //5.number of vaccinated person
						{
						    cout<<"\n Total number of people who are vaccinated till now : ";
						    cout<<b1.AppointmentCounter();


						}
						else if(ch==6)
                        {
                            c1.readphoneNo();
                            c1.certificateVaccination();
                        }
                            else if(ch==7)
                                {
                                    exit(0);
                                }
                                else
                                {
                                    wroung();
                                }
						char holdScreen;
						cout<<"\n\n\n\n\n\n\n press any key to continue(other than enter)";
						cin>>holdScreen;
						system("CLS");
	}while(1);
	return 0;
}
