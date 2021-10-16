//3. Find difference between two dates (of possibly two different years) in days.
//(Hint : - 12/2/2004   03/09/2009    2004 , 2009 , leap year) 
//Kumari Saumya Singh
//1913097
//date of creation: 12-01-2021

#include <iostream>
using namespace std;
struct Date{
	int d,m,y;
}; 

const int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int countLeapYears(Date d)
{
	int years=d.y;
	if (d.m<=2)
		years--;
	return years/4-years/100+years/400;
}
int getDiff(Date dt1,Date dt2)
{
	long int n1=dt1.y*365+dt1.d;
	for(int i=0;i<dt1.m-1;i++)
		n1+=monthDays[i];
	n1+=countLeapYears(dt1);
	long int n2=dt2.y*365+dt2.d;
	for(int i=0;i<dt2.m-1;i++)
		n2+=monthDays[i];
		n2+=countLeapYears(dt2);
	return(n2-n1);
}
int main()
{
	Date dt1;
	cout<<"Enter day of 1st date:";
	cin>>dt1.d;
	cout<<"Enter month of 1st date:";
	cin>>dt1.m;
	cout<<"Enter year of 1st date:";
	cin>>dt1.y;
	Date dt2;
	cout<<"Enter day of 2nd date:";
	cin>>dt2.d;
	cout<<"Enter month of 2nd date:";
	cin>>dt2.m;
	cout<<"Enter year of 2nd date:";
	cin>>dt2.y;
	cout<<"Difference between two dates is "<<getDiff(dt1,dt2);
	return 0;
}