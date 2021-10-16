#include <bits/stdc++.h> 
#include <iostream>
#include <fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	string myText;
	ifstream File("inputfile.txt");
	while (getline (File, myText)) 
	{
		cout<< myText<<endl;
	}
	File.close();
	
	
	/*// Create and open a text file
  ofstream MyFile("inputfile.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
 
// Create a text string, which is used to output the text file*/
}
/*string macroname(string myText,int f=0,string s="NO1")
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
	if(s=="END")
		return tokens[tokens.size()-1];
	if(f==0)
		return tokens[0];
	if(f==2)
		return tokens[2];
	return tokens[1];
}
int stringToIntConversion(string s)
{
	stringstream s1(s);
	int x=0;
	s1 >> x;
	return 0;
}
int SearchMNT(string myText)
{
	string MN;
	ifstream MNT("MNT.txt");
	string s,p;
	s=macroname(myText);
	while (getline (MNT, MN)) 
	{
		p=macroname(MN,1);
		cout << p<<endl;
		if(s == p)
			return stringToIntConversion(macroname(MN,1,"END"));
	}
	MNT.close();
	return 0;
}
vector<string> argumentList(string myText,int f=1)
{
	
	string line1;
	line1=macroname(myText,f);
    vector <string> parameters;	
    stringstream check2(line1); 
    string intermediate1;  
    while(getline(check2, intermediate1, ',')) 
    { 
        parameters.push_back(intermediate1); 
    } 
	return parameters;
}
vector<string> argumentSubstitution(vector<string> ARG,string MD)
{
	vector <string> ARG1;
	ARG1=argumentList(MD,2);
	for(int i=0;i<ARG1.size();i++)
	{
		if(ARG1[i][0]=='#')
		{
			int x=ARG1[i][1]-'0';
			ARG1[i]=ARG[x];
		}
	}
	return ARG1;
}
int main()
{
	vector<string> a,b;
	string s1="2 abc 1,#0",s2="abc p,q,r";
	a=argumentList(s2);
	b=argumentSubstitution(a,s1);
	for(int i = 0; i < b.size(); i++)
		cout<<b[i]<<endl;
	
}

/*#include <bits/stdc++.h> 
 #include <iostream> 
#include <sstream> 
using namespace std; 
  
int main() 
{ 
    string s = "12345"; 
  
    // object from the class stringstream 
    stringstream g(s); 
  
    // The object has the value 12345 and stream 
    // it to the integer x 
    int x = 0; 
    g >> x; 
  
    // Now the variable x holds the value 12345 
    cout << "Value of x : " << x; 
  
    return 0; 
}*/
/*using namespace std; 
 string macroname(string myText,int f=0)
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
	if(string=="END")
		return tokens[tokens.size];
	if(f==0)
		return tokens[0];
	return tokens[1];
}
vector<string> argumentList(string myText)
{
	
	string line1;
	line1=macroname(myText,1);
    vector <string> parameters;	
    stringstream check2(line1); 
    string intermediate1;  
    while(getline(check2, intermediate1, ',')) 
    { 
        parameters.push_back(intermediate1); 
    } 
    for(int i = 0; i < parameters.size(); i++)
	{
		cout << parameters[i] << '\n'; 
	}
	return parameters;
}
int argIndex(vector<string> p,vector<string> q)
{
	for(int i = 0; i < p.size(); i++)
		{
			if(p[i]==q[1])
				return i;
		}
	return -1;
}
int main() 
{   
	string myText="abc &a,&b";
	string my="line 1,&b";
	vector<string> p,q;
	p=argumentList(myText);
	q=argumentList(my);
	int n=argIndex(p,q);
	cout<<n;
    /*string line = "ABC &x,&y"; 
      
    // Vector of string to save tokens 
    vector <string> tokens;	
      
    // stringstream class check1 
    stringstream check1(line); 
      
    string intermediate; 
      
    // Tokenizing w.r.t. space ' ' 
    while(getline(check1, intermediate, ' ')) 
    { 
        tokens.push_back(intermediate); 
    } 
	  
    // Printing the token vector 
    for(int i = 0; i < tokens.size(); i++) 
        cout << tokens[i] << '\n';
		
	string line1;
	line1=tokens[1];
      
    // Vector of string to save tokens 
    vector <string> parameters;	
      
    // stringstream class check1 
    stringstream check2(line1); 
      
    string intermediate1; 
      
    // Tokenizing w.r.t. space ' ' 
    while(getline(check2, intermediate1, ',')) 
    { 
        parameters.push_back(intermediate1); 
    } 
	  
    // Printing the token vector 
    for(int i = 0; i < parameters.size(); i++)
	{	
		if(parameters[i][0]=='&')
		{
			parameters[i][0]='#';
		}
		cout << parameters[i] << '\n'; 
	}
	
}*/
