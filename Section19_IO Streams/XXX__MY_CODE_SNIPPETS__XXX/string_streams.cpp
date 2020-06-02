#include <iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    int num{10};
    double total{22.34};
    string name{"abcd"};

    stringstream ssobj{};
    ssobj<<name<<num<<total;
    string s =ssobj.str();
    cout<<s<<endl;
}