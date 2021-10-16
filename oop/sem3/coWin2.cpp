// A C/C++ Program to generate OTP (One Time Password)
#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>
#include<windows.h>
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
void adharCard(string adharno)
{
    cout.setf(ios::left);
    for(int i=1;i<100;i++)
        printf("-");
    string row;
    ifstream adharcard("adharcard.txt");
    while (getline (adharcard, row))
	{
	    if(adharno==breakStringBySpace(row)||adharno==breakStringBySpace(row,1))
        {
            cout<<"\n\n"<<breakStringBySpace(row,1)<<setw(3)<<breakStringBySpace(row,2)<<setw(3)<<breakStringBySpace(row,3)<<setw(3)<<breakStringBySpace(row,4);
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
	cout<<"wroung input"<<"\n\n\n\n\n";
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

// Driver Program to test above functions
int main()
{
	int f;
	string phoneNumber;
	string adharno,name;
	int age;
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	system("CLS");
	SetConsoleTextAttribute(h,14);
	goTORowCol(1,40);
    L:cout<<"\n Enter your mobile number(eg:1234567898) : ";
    cin>>phoneNumber;
	intStringCheck(phoneNumber,10,&f);
	if(f==1)
	{
		goto L;
	}
    // For different values each time we run the code
    srand(time(NULL));
    // Declare the length of OTP
	string refid=generateOTP().c_str();
    cout<<"Your REFERENCE ID is "<<refid;


    cout<<"\n press 1.for login 2.for registration  "<<endl;
    int ch;
	cin>>ch;
	
    if(ch==1)
    {
		ofstream adharcard("adharcard.txt",ios::app);
		M:cout<<"\n enter you adhar card number(eg 123456789111) : ";
		cin>>adharno;
		intStringCheck(adharno,12,&f);
		if(f==1)
			goto M;
		cout<<"\n enter you name : ";
		cin>>name;
		cout<<"\n enter your age : ";
		cin>>age;
		if(age >= 45)
		{
			adharcard<<adharno<<" "<<phoneNumber<<" "<<refid<<" ";
			adharcard<<name<<" ";
			adharcard<<age<<"\n";
		}
		else
		{
			cout<<"\n your age is below the age for vaccination ";
			
			goto M;
		}
		adharcard.close();
	}
	else if(ch==2)
		{

				cout<<"\n enter you adhar card number : ";
				cin>>adharno;
			adharCard(adharno);

		}
		else
			cout << "\n ERROR!";

    return(0);
}