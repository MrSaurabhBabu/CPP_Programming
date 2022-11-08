#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"-----:Check Odd Or Even :-----\n\n";
    cout<<"Enter Number To Check:-";
    cin>>a;
    if(a%2==0)
    {
        cout<<a <<" Is Even Number.";
    }
    else
    {
        cout<<a <<" Is Odd Number";
    }
    return 0;
}