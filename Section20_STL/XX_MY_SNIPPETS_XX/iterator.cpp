#include<iostream>
#include<vector>
#include <set>
#include <map>
#include <list>
using namespace std;

int main()
{
    //declaration
    //container_type::iterator_type iterator_name;
    //begin points to first element
    //end points to after the last element
    vector<int>v{1,2,3,3,4,4};
    vector<int>::iterator i=v.begin();
    //or
    //auto i=v.begin();
    cout<<*i;

}