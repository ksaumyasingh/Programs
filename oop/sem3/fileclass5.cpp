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
	ofstream f;
	f.open("c:/file/changeMode2.txt");
	fstream F;
	F.open("c:/file/changeMode2.txt",ios::in|ios::out);
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
		F.seekg(0);
		for(int i=0;i<2;i++)
		{
			I.read();
			cout<<endl<<"put pointer position"<<F.tellg();
			F.read((char *)&K,sizeof(K));
			K.show();
		}
	}
	F.close();
	return 0;
}