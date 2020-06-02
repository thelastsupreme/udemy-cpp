#include<iostream>
using namespace std;

double calculate_avg(int sum,int total)
{
    if(total==0)
        throw 0;
    return static_cast<double>(sum)/total;
}

int main()
{
    int sum{100};
    int total{0};
    double avg{};
    
    try
    {
        avg=calculate_avg(sum,total);
        cout<<avg<<endl;
    }
   /* catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    */
   catch(int &ex)
   {
       cerr<<"You cant divide by zero"<<endl;
   }
    
}