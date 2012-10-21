#include<iostream>

using namespace std;

int sum (int a, int b, int c, int d, int e)
{
    return a+b+c+d+e;
}

int main()
{
    int a[5]={1,2,3,4,5};
    cout<<"Sum of array is = "<<sum (a[0],a[1], a[2], a[3], a[4])<<endl;
    return 0;
}

