#include <iostream>
#include <fstream>
using namespace std; 
int main()
{
	string a="abc 123w";
	int b=1;
 // Create and open a text file
  ofstream My("input.txt");
ofstream My1("input1.txt");

  // Write to the file
  My1 <<a<<" "<<b;
  My1 <<b<<"qqq";
  // Write to the file
  My <<a<<" "<<b;
  My <<b<<"pp";

  // Close the file
  My.close();
  My1.close();
 
}