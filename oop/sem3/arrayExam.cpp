#include<iostream>
#include<stdlib.h>
using namespace std;
template<class X>
class Array
{
	X arr[80];
	int n;
	public:
		void storing();
		void display();
		int search(X ele);
		void sort();
};
template<class X>
void Array<X>::storing()
{
	cout<<"\n Enter the size of array : ";
	cin>>n;
	cout<<"\n Enter the array";
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
template<class X>
void Array<X>::display()
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
template<class X>
int Array<X>::search(X ele)
{
	for(int i=0;i<n;i++)
		if(ele==arr[i])
			return 1;
	return 0;
}
template<class X>
void Array<X>::sort()
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
			{
				X temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
}
int main()
{
	Array <int> a;
	int choice;
	do
	{
		cout<<"\n1.storing \n2.display \n3.search \n4.sort \n5.exit";
		cin>>choice;
		switch(choice)
		{
			case 1:
					a.storing();
					break;
			case 2:
					a.display();
					break;
			case 3:
					cout<<"\nenter the ele to be searched";
					int ele;
					cin>>ele;
					if(a.search(ele))
						cout<<"\n element found at location "<<a.search(ele);
					else
						cout<<"\n element not present";
					break;
			case 4:
					a.sort();
					break;
			case 5:
					exit(0);
		}
		
	}while(1);
	return 0;
}