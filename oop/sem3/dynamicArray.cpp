//5. Use Pointer as an dynamic array to hold 10 values and print same values in reverse order.
//Kumari Saumya Singh
//1913097
//date of creation: 12-01-2021


#include<iostream>
using namespace std;
int main() {
	//int x, n;
	//cout << "Enter the number of items:" << "\n";
	//cin >>n;
	/*int x;
	int *arr = new int(10);
	cout << "Enter 10" << " items\n";
	for (x = 0; x < 10; x++) 
	{
		cin >> arr[x];
	}
	cout << "reversed item list: \n";
	for (x = 9; x >(-1); x--)
	{
		cout << arr[x] << " ";
	}
	return 0;*/
	int i;
	int *a=new int(10);
	cout<<"Enter elements= "<<"\n";
	for(i=0;i<10;i++)
		cin>>a[i];
	cout<<"Elements in Reverse order= "<<"\n";
	for(i=9;i>=0;i--)
		cout<<a[i]<<"\n";

    return 0;
}