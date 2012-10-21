#include<iostream>

using namespace std;

int main()
{
    int a[2][2]={1,2,3,4};
    int b[2][2]={{1,2},{3,4}};
    int c[2][2]={{0},{2,1}};
    for (int i=0; i<2; ++i)
    {
        for(int j=0;j<2;++j)
        cout<<a[i][j]<<endl;
    }
    return 0;
}

