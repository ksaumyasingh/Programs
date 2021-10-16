#include<iostream>
#include<fstream>
using namespace std;
class ITEM
{
	int code;
	char nm[20];
	public:
		void read()
		{
			cout<<"enter code and name of item:";
			cin>>code;
			cin>>nm;
		}
		void show()
		{
			cout<<" code and name of item :";
			cout<<code<<"\t"<<nm;
		}
};
int main()
{
	ITEM I,K;
	ofstream F;
	F.open("c:/file/changeMode.txt");
	if(F.fail())
		cout<<"unable to open file";
	else
	{
		for(int i=0;i<2;i++)
		{
			I.read();
			cout<<endl<<"put pointer position"<<F.tellp();
			F.write((char *)&I,sizeof(I));
		}
		F.close();
	}
	ifstream f;
	f.open("c:/file/changeMode.txt");
	if(f.fail())
		cout<<"unable to open file";
	else
	{
		f.seekg(0);
		for(int i=0;i<2;i++)
		{
			I.read();
			cout<<endl<<"put pointer position"<<f.tellg();
			f.read((char *)&K,sizeof(K));
			K.show();
		}
		f.close();
	}
	return 0;
}