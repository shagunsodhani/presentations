#include<iostream>
using namespace std;

int square(int );

void is_greater (double x)
{
        if(x>45)
        {
            cout<<"x is greater than 45 "<<endl;
        }
        else
            cout<<"x is less than 45"<<endl;
}

int main()
{
    int a=25;
    cout<<square(a)<<endl;             //returns square of a ie 25
    double b=90;
    is_greater(b);
    return 0;
}

int square(int x)
{
        return x*x;
}
