#include<iostream>

using namespace std;

int main()
{
    int x=5;
    int *a= &x;
    int b=x;
    cout<<"Address of x is "<<a<<endl;
    cout<<"Value of x is "<<*a<<endl;
    b=b+1;
    cout<<"Value of x is "<<x<<endl;
    *a=*a+1;
    cout<<"Value of x is "<<x<<endl;
    return 0;
}

