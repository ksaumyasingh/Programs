//WOOP over Array class for searching, sorting and storing Array of Generic D.T..

//kumari saumya singh
//1913097
//D.O.C- 22-04-2021

#include<iostream>

using namespace std;


template<class t>
class Array
{
	t   A[10];
	
	public:
	void Get()
	{
		cout<<"\n\nEnter elements of Array : ";
		for(int i=0;i<5;i++)
			cin>>A[i];
    }

	void Search(t key)
	{
		for(int i=0;i<5;i++)
		if (key==A[i])
		{
			cout<<"\nElement Found";
			return ;
		}
		cout<<"\nElement Not Found";
	}

	void Sort()
	{
		t temp;
		for(int i=0;i<5;i++)
			for (int j=i+1;j<5;j++)
				if (A[i]>A[j])
				{
					temp=A[i];
					A[i]=A[j];
					A[j]=temp;
		    	}
	}

	void Show()
	{
		cout<<"\nArray : ";
		for(int i=0;i<5;i++)
			cout<<A[i]<<" ";
	}
};



int main()
{
	Array<int> Z;
	int a;
	
	Z.Get();
	cout<<"\nEnter integer to be searched= ";
	cin>>a;
	Z.Search(a);
	Z.Sort();
	cout<<"\n\nAfter Sorting ";
	Z.Show();


	Array<double> Y;
	double b;
	
	Y.Get();
	cout<<"\nEnter integer to be searched= ";
	cin>>b;	
	Y.Search(b);
	Y.Sort();
	cout<<"\n\nAfter Sorting ";
	Y.Show();
	
	return 0;
}