#include <bits/stdc++.h>
#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
#include<cmath>
#include <ctime>
#include<iomanip>
using namespace std;
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
void displayHospitalByPincode(string pincode)
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
	    if(pincode==breakStringBySpace(row))
        {
            cout<<"\n\n"<<setw(3)<<breakStringBySpace(row,1)<<"   "<<setw(25)<<breakStringBySpace(row,3)<<setw(5)<<breakStringBySpace(row,4)<<" : "<<setw(3)<<breakStringBySpace(row,5);
            cout<<setw(3)<<breakStringBySpace(row,6)<<setw(3)<<breakStringBySpace(row,7)<<setw(3)<<breakStringBySpace(row,8);
        }
	}
	Hospital.close();
}
void displayHospitalByDistrict(string district)
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
	    if(district==breakStringBySpace(row,2))
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
    ifstream Hospital("Hospital.txt");
    while (getline (Hospital, row))
    {
        if(refno==breakStringBySpace(row,1))
        {
            int index=5+day-time1();

        }
    }
    Hospital.close();
}
void selectSlot(int slot=1)
{
    switch(slot)
    {
        case 1:
               cout<<"\n1. 09:00AM - 11:00AM"<<endl;
               break;
        case 2:
               cout<<"2. 11:00AM - 01:00PM"<<endl;
               break;
        case 3:
               cout<<"3. 01:00PM - 03:00PM"<<endl;
               break;
        case 4:
               cout<<"4. 03:00PM - 05:00PM"<<endl;
               break;
    }
}
int main()
{
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
    switch(choice)
    {
		case 1:	
                system("CLS");
                cout<<"available pincodes are:\n841301\t\t334001\t\t800001\n\n";
                cout<<"enter pincode : ";
                string pincode;
                cin>>pincode;
                system("CLS");
                displayHospitalByPincode(pincode);
				break;
	
		case 2:
                system("CLS");
                cout<<"available districts are:\nSaran\t\tBikaner\t\tPatna\n\n";
                cout<<"enter district : ";
                string district;
                cin>>district;
                system("CLS");
                displayHospitalByDistrict(district);
				break;
        default:
		
                goTORowCol(230,40);
                SetConsoleTextAttribute(h,10);
                cout<<"error! wroung input"<<endl;
				break;
	}		
        
    SetConsoleTextAttribute(h,11);
    cout<<"\n\n\nenter refno of selected hospital and selected day: ";
    string refno; int day;
    cin>>refno;
    cin.ignore();
    cin>>day;
    updateHospitalEntries(refno,day);
    system("CLS");
    goTORowCol(1,40);
    cout<<"\n Time slot selection : "<<endl;
    for(int i=1;i<100;i++)
    printf("-");
    for(int i=1;i<5;i++)
        selectSlot(i);
    cout<<"\n\n\nselect your slot : "<<endl;
    int slot;
    cin>>slot;
    goTORowCol(230,40);
    SetConsoleTextAttribute(h,10);
    cout<<"YOUR APPOINTMENT IS CONFIRMED!";
    SetConsoleTextAttribute(h,14);
}
