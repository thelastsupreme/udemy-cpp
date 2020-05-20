#include<iostream>
using namespace std;

int main()
{
    int y{10};
    int &x=y;
    cout<<&x<<endl;
    cout<<&y;
}