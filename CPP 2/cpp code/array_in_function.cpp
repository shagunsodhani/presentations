#include<iostream>

using namespace std;

int sum (int a[], int i)
{
    int sum=0;
    for(int j=0;j<i;++j)
    {
        sum=sum+a[j];
    }
    return sum;
}

int main()
{
    int a[5]={1,2,3,4,5};
    cout<<"Sum of array is = "<<sum(a,5)<<endl;
    return 0;
}

