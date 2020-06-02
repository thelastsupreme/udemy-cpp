#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()  
{
    fstream out_file {"output.txt", std::ios::app};
    if (!out_file) {
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }
    string line;
    cout << "Enter something to write to the file: ";
    getline(cin, line);
    out_file << line << std::endl;
    
    out_file.close();
   
    return 0;
}