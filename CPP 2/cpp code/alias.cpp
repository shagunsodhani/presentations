#include<iostream>

using namespace std;

int main()
{
    int x=5;
    int& a =x;
    cout<<"Address of x is "<<&x<<endl;
    cout<<"Address of a is "<<&a<<endl;
    ++a;
    cout<<"Value of x is "<<x<<endl;
    return 0;
}

