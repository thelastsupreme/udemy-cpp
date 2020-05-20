#include <iostream>
#include <string>

using namespace std;

class Test
{
public:
    int id;
    string name;

};

int main()
{
    Test *test_p= new Test;
    (*test_p).id=4;
    //or
    test_p->id=7;
    cout<<test_p->id<<endl;
    cout<<(*test_p).id<<endl;
    Test a{2,"hey"};
    delete test_p;
}