#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a=25;

    double b=90;

    cout<<exp(2.0)<<endl;              //returns e*e ie 7.389056

    cout<<log(7.389056)<<endl;          //returns log base 2 of 1024 ie 10

    cout<<sqrt(a)<<endl;               //returns square root of a ie 5.0

    cout<<log10(b*10+100)<<endl;      //returns log base 10 of 1000 ie 3

    return 0;
}
