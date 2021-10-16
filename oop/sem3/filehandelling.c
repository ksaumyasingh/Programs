#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>

using namespace std;

class Faculty 
{
	char fac_dep[50];
	char fac_name[50];
	char fac_id[20];

	public:
		// inputs new faculty's record details 
 		void createFacultyRecord()
		{
			cout<<endl;
			cout << "\t NEW FACULTY ENTRY!" << endl;	
			cout << "\t Enter the Faculty ID : ";
			cin >> fac_id;
			cin.ignore();
			cout << "\t Enter the Faculty name : ";
			gets(fac_name);
			cout << "\t Enter the Faculty Department : ";
			gets(fac_dep);
			cout << "\t NEW FACULTY RECORD CREATED!" << endl;
		}
		
		// displays the details of a single faculty record 
		void viewFacultyRecord()
		{
			cout <<  "\t\t Faculty ID : ";
			puts(fac_id);
			cout << "\t\t Faculty name : ";
			puts(fac_name);	
			cout << "\t\t Faculty Department : ";
			puts(fac_dep);
		}
		
		// input the new data for the facultyto be modified
		void inputModifiedFacultyData()
		{
			cout << "\t Enter the ID of the faculty whose data is to be modified : ";
			cin >> fac_id;
			cin.ignore();
			cout << "\t Modify Faculty name (if desire) : ";
			gets(fac_name);
			cout << "\t Modify Faculty Department : ";
			gets(fac_dep);	
		}
		
		char* returnID()
		{
			return fac_id;
		}
		void report()
		{
			cout << setw(45) << fac_id << setw(45) << fac_name << setw(45) << fac_dep << endl;
		}	
};

fstream f_obj1, f_obj2;
Faculty f;

// to save the new student record in the file containing the data of all students 
void saveFacultyDetails()
{
	char ch;
	f_obj1.open("Faculty.dat", ios :: out | ios :: app);
	do
	{
		system("cls");
		f.createFacultyRecord();
		f_obj1.write((char*) &f, sizeof(Faculty));
		cout << endl << endl << "\t Add more record (Y/N) : ";
		cin >> ch;	
	} while(ch == 'Y' || ch == 'y');
	
	f_obj1.close();
}

// to delete a specific faculty record
void deleteFacultyRecord()
{
	char id[6];
	int flag = 0;
	system("cls");
	cout << endl << endl << "\t DELETE STUDENT RECORD" << endl;
	cout << endl << "\t Enter the Faculty ID : ";
	cin >> id;
	
	f_obj1.open("Faculty.dat", ios :: in | ios :: out);
	fstream f_temp;
	f_temp.open("Temp.dat", ios :: out);
	f_obj1.seekg(0, ios :: beg);
	
	while(f_obj1.read((char*) &f, sizeof(Faculty)))
	{
		if(strcmpi(f.returnID(), id) != 0)
			f_temp.write((char*) &f , sizeof(Faculty));	
		
		else
			flag = 1;
			
	}
	f_temp.close();
	f_obj1.close();
	remove("Faculty.dat");
	rename("Temp.dat", "Faculty.dat");
	
	if(flag)
		cout << endl << endl << "\t Record Deleted!" << endl;
	else
		cout << endl << endl << "\t Record Not Found!" << endl;

	getch();
}

// to display all the faculty records 
void viewFacultyRecord()
{
	system("cls");
	f_obj1.open("Faculty.dat", ios :: in);
	if(!f_obj1)
	{
		cout << "\t File could not be opened";
		getch();
		return;
	}
	cout<< endl << endl << setw(92) << "FACULTY RECORDS" << endl << endl;
	cout << setw(45) << "Faculty ID." << setw(45) << "Faculty Name" << setw(45) << "Faculty Department" << endl;	
	cout << setw(135) << "-------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	while(f_obj1.read((char*) &f, sizeof(Faculty)))
	{
		f.report();
	}
	f_obj1.close();
	getch();
}

// to modify one or more details of the existing faculty
void modifyFacultyRecord()
{
	char id[10];
	int found = 0;
	system("cls");
	cout << endl << endl << "\t MODIFY FACULTY RECORD";
	cout << endl << "\t Enter the ID : ";
	cin >> id;
	f_obj1.open("Faculty.dat", ios :: in | ios :: out);
	while (f_obj1.read((char*)&f, sizeof(Faculty)) && found == 0)
	{
		if (strcmpi(f.returnID(), id) == 0)
		{
			f.viewFacultyRecord();
			cout << endl << "\t Enter the new details of Faculty" << endl;
			f.inputModifiedFacultyData();
			long long int pos = -1 * sizeof(f);
			f_obj1.seekp(pos, ios :: cur);
			f_obj1.write((char*)&f, sizeof(Faculty));
			cout << "\n\n\t Record Updated!";
			found = 1;
		}	
	}
	f_obj1.close();
	if(found == 0)
		cout << "\n\n Record Not Found";
	
	getch();
}


// to perform one or more operations on faculties information 
void facultyRecordHandling()
{
	int choice;
	do
	{
		system("cls");
		cout << endl << endl << endl;
		cout << "\t\t FACULTY RECORD ADMINISTRATION" << endl << endl;
		cout << "\t\t 1. CREATE FACULTY RECORD." << endl << endl;
		cout << "\t\t 2. DELETE FACULTY RECORD." << endl << endl;
		cout << "\t\t 3. VIEW ALL FACULTIES RECORDS." << endl << endl;
		cout << "\t\t 4. MODIFY FACULTY RECORD." << endl << endl;
		cout << "\t\t 5. BACK TO MAIN MENU" << endl << endl;
		cout << "\t\t ENTER CHOICE: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				saveFacultyDetails();
				break;
			case 2:
				deleteFacultyRecord();
				break;
			case 3:
				viewFacultyRecord();
				break;
			case 4:
				modifyFacultyRecord();
				break;
			case 5:
				break;
			default:
				cout << "Wrong Choice!" << endl;
				break;
		}
	} while(choice != 5);
	
	return;
}

int main()
{
	int choice;
	
	// Main Menu lets the user perform one or more of the availabe options
	do
	{
		system("cls");
		cout << endl;
		cout << "\t\t 1. FACULTY RECORD HANDLING" << endl << endl;
		cout << "\t\t 2. EXIT" << endl << endl;
		cout << "\t\t ENTER YOUR CHOICE: ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				facultyRecordHandling();
				break;
			case 2:
				exit(0);
				break;
			default:
				cout << endl << endl;
				cout << "\t\t Wrong Choice! Enter a valid choice." << endl;
				getch();
				break;
		}
	} while(choice != 2);
	
	return 0;	
}