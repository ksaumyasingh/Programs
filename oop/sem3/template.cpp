#include<iostream>
using namespace std;

template<class t1,class t2>
class Array
{
	t1 A[10];
	public:
		void Get()
		{
			for(int i=0;i<10;i++)
				cin>>A[i];
		}
		void search(t x)
		{
			for(int i=0;i<10;i++)
				if(x==A[i])
					return cout<<"ele found";
		}
}
int main()
{
	Array<int,int> a;
	a.Get();
	a.search(5);
}