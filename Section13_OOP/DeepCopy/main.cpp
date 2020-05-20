// Section 13
// Copy Constructor - Deep Copy
#include <iostream>

using namespace std;

class Deep {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

//only difference between deep copy and shallow copy 
//in shallow we just took source.data
//now we are allocating new memory and then we are assigning the value to the new memory
Deep::Deep(const Deep &source)
    : Deep {*source.data} {
    cout << "Copy constructor  - deep copy" << endl;
}

Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}

int main() {
    
    Deep obj1 {100};
    display_deep(obj1);
    
    Deep obj2 {obj1};
    
    obj2.set_data_value(1000);
  
    return 0;
}

