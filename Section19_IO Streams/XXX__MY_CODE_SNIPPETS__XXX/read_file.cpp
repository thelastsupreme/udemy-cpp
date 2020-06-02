#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file;
    string line;
    file.open("new.txt",ios::in);
    // if(file.is_open())
    // {
    //     //read it
    // }
    if(!file)
    {
        cerr<<"file opening error"<<endl;
        return 1;
    }
    while(!file.eof())
    {
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();
}