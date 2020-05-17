#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);

    int n=s.size();

    for(int i=0;i<n;i++)
    {
        string temp=s.substr(0,i+1);
        string rtemp=temp.substr(0,i);
        string spaces="";
        for(int j=0;j<(s.size()-rtemp.size());j++)
            spaces+=" ";
        reverse(rtemp.begin(),rtemp.end());
        cout<<spaces<<temp<<rtemp<<endl;
    }
}