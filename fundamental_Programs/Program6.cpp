//To demonstrate automatic object initialization and cleanup.( Constructor and Destructor) 
#include <iostream> 
using namespace std; 
class Demo { 
public: 
    Demo() { 
        cout << "Constructor called "; 
    } 
    ~Demo() { 
        cout << "Destructor called "; 
    } 
}; 

int main() { 
    Demo d; 
    return 0; 
} 