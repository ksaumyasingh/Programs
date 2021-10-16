/*
#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include <fstream>
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
    cout<<"serch hospital"<<endl;
    goTORowCol(5,1);
    SetConsoleTextAttribute(h,11);
    cout<<"1. pincode            2.district\n\n"<<endl;
    SetConsoleTextAttribute(h,7);
    cout<<"enter choice : "<<endl;
    int choice;
    cin>>choice;
    ofstream Hospital("Hospital.txt");
        Hospital<<"\n841301 Saran Apollo HWC 5 5 5 5";
        Hospital<<"\n841301 Saran Sarojni DH 3 3 3 3";
        Hospital<<"\n334001 Bikner Amritkaur HWC 5 5 5 5";
        Hospital<<"\n334001 Bikaner Apollo HWC 5 5 5 5";
        Hospital<<"\n800001 Patna Sarojni DH 3 3 3 3";
        Hospital<<"\n800001 Patna MahatmaGandhi HWC 2 2 2 2";
    Hospital.close();
    switch(choice)
    {
        case 1:
                system(CLS);
                cout<<"available pincodes are:\n841301\t\t334001\t\t800001\n\n";
                cout<<"enter pincode : ";
                int pincode;
                cin>>pincode;
    }
}*/
/*#include<iostream>
#include<cmath>
#include <ctime>
#include<iomanip>
using namespace std;


int main()
{

  time_t t = time(NULL);
  tm* timePtr = localtime(&t);

  cout << "seconds= " << (timePtr->tm_sec) << endl;
  cout << "minutes = " << (timePtr->tm_min) << endl;
  cout << "hours = " << (timePtr->tm_hour) << endl;
  cout << "day of month = " << (timePtr->tm_mday) << endl;
  cout << "month of year = " << (timePtr->tm_mon)+1 << endl;
  cout << "year = " << (timePtr->tm_year)+1900 << endl;
  cout << "weekday = " << (timePtr->tm_wday )<< endl;
  cout << "day of year = " << (timePtr->tm_yday )<< endl;
  cout << "daylight savings = " <<(timePtr->tm_isdst )<< endl;
  cout << endl;
  cout << endl;
	cout<<setw(10)<<"abcd";

  cout << "Date     " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
  cout << "Time     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
  return 0;
}
*/
/*#include <bits/stdc++.h>
#include<iostream>
#include<windows.h>*/
/*#include<stdlib.h>
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
void displayHospital(string pincode)
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
void updateHospitalEntries(string refno,int day)
{
    string row;
    ifstream Hospital("Hospital.txt");
    while (getline (Hospital, row))
    {
        if(refno==breakStringBySpace(row,1))
        {
            int index=5+day-time1();
           // cout<<Hospital.tellp();

        }

    }
    Hospital.close();
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
    cout<<"serch hospital"<<endl;
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
        Hospital<<"\n334001 131 Bikner Amritkaur HWC 5 5 5 5";
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
                displayHospital(pincode);
                cout<<"\n\n\nenter refno of selected hospital and selected day: ";
                string refno; int day;
                cin>>refno;
                cin.ignore();
                cin>>day;
                updateHospitalEntries(refno,day);

    }
}*/
/*#include<iostream>
#include <stdio.h>
#include "sqlite3.h" 
using namespace std;
int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open("test.db", &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   cout<<"abx";
   sqlite3_close(db);
}*/
#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc )
   {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } 
   else 
   {
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "CREATE TABLE COMPANY("  \
      "ID INT PRIMARY KEY     NOT NULL," \
      "NAME           TEXT    NOT NULL," \
      "AGE            INT     NOT NULL," \
      "ADDRESS        CHAR(50)," \
      "SALARY         REAL );";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else 
   {
      fprintf(stdout, "Table created successfully\n");
   }
   sqlite3_close(db);
   return 0;
}

