//kumari saumya singh
//roll no.=1913097
//date of creation=20-03-2021

#include<iostream>
#include <bits/stdc++.h> 
#include<string>
using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int min,index,f=0,p;
		index=-1;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x||points[i][1]==y)
            {
                if(points[i][0]==x)
                    p=abs(y-points[i][1]);
                else
                    p=abs(x-points[i][0]);
                if(f==0)
                {
                    index=i;
                    f=1;
                    min=p;
                }
                else if(p<min)
                {
                    min=p;
                    index=i;
                }
                if(i==points.size()-1)
                    return index;
            }
			cout<<i<<setw(5)<<index<<endl;
			if(i==points.size()-1)
			{
					cout<<"+";
                    return index;
			}
        }
		return -1;
    }
};
int main()
{
	Solution s;
	 vector<vector<int>> vect
    {
        {3,2},
        {4, 5},
        {7, 8}
    };
	int i=s.nearestValidPoint(1,1,vect);
	cout<<i;
}