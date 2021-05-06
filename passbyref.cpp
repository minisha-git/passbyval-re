#include <iostream>

using namespace std;

void swap(int *x,int *y);
int main()
{
    int a,b;
    a=10;
    b=20;
     cout<<"Before swapping the value a and b="<<a<<' '<<b<<endl;
    swap(&a,&b); // pass by reference
     cout<<"After swapping the value a and b="<<a<<' '<<b;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
     cout<<"After swapping values in function x and y="<<*x<<' '<<*y<<endl;
}