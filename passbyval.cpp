#include<iostream>

using namespace std;

void swap(int x,int y);
int main()
{
    int a,b;
    a=10;
    b=20;
    cout<<"Before swapping the value of a and b="<<a<<' '<<b<<endl;
    swap(a,b); // pass by value
    cout<<"After swapping the value in main a and b"<<a<<' '<<b;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
 cout<<" After swapping the value in the function x and y="<<x<<' '<<y<<endl;
}