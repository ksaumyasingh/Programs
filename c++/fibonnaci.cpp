#include<iostream>
using namespace std;
void fib(int n)
{
    int n2=0,n1=1,sum=0;
    if(n>=0)
        cout<<"0 ";
    if(n>=1)
        cout<<"1 ";
    if(n>1)
    {
        for(int i=0;i<n;i++)
        {
            sum=n2+n1;
            cout<<sum<< " ";
            n2=n1;
            n1=sum;
        }
    }
     
}
int main()
{
    int n;
    cin>>n;
    fib(n);
}