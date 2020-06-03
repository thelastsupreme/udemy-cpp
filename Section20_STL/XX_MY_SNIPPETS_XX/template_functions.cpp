#include<iostream>
#include<vector>
using namespace std;

template <typename T>
T max(vector<T>a)
{
    T m;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;
}

int main()
{
    vector<float> A{1.2,2.11,3.12,2.72};
    cout<<max(A);
}