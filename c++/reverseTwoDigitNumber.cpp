#include<iostream>
using namespace std;
int reverse(int n)
{
    int q=n%10;
    q=q*10;
    n=n/10;
    int r=n%10;
    q+=r;
    return q;

}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
}