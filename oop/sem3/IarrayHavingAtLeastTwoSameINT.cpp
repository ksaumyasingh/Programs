//kumari saumya singh
//roll no.=1913097
//date of creation=19-03-2021

#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
class Solution 
{
public:

	bool containsDuplicate(vector<int>& nums)
    {
		sort(nums.begin(), nums.end()); 
        for(int i=0;i<nums.size()-1;i++)
				if(nums[i]==nums[i+1])
					return true;
		return false;
    }
};
int main()
{
    vector <int> nums;
    int n,p;
    cout<<"enter size of list"<<endl;
    cin>>n;
    cout<<"enter list"<<endl;
    for(int i=0;i<n;i++)
	{
		cin>>p;
		nums.push_back(p);
	}
//cout<<nums<<endl<<nums+nums.size();
    Solution s;
    bool f= s.containsDuplicate(nums);
    if(f)
		cout<<"true";
	else
		cout<<"false";
	return 0;
}
/*class Array
{
	int nums[100000],n;
	public:
	void get()
	{
		cout<<"size of array";
		cin>>n;
		cout<<"enter integer array"<<endl;
		int i;
		for(i=1;i<=n;i++)
			cin>>nums[i];	
	}
	bool solve()
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				if(nums[i]==nums[j])
					return true;
		return false;
	}
	/*void show()
	{
		cout<<"array"<<endl;
		for(int i=1;i<=n;i++)
			cout<<nums[i]<<" ";
	}
};
int main()
{
	Array a;
	a.get();
	bool f=a.solve();
	if(f)
		cout<<"true";
	else
		cout<<"false";
	return 0;
	
}
public:
    bool containsDuplicate(vector<int>& nums) {
        
    }*/