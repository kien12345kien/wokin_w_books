// Use an initializer list to set the initial values for member variables

#include <iostream>
#include <string>

using namespace std;

class Foo{
    private:
        int counter;
        string* str;
    
    public:
        // Foo() : counter(0), str(nullptr) {}
        Foo(int c, string* p) : counter(c), str(p) {}
};

int main(){
    string s = "bar";
    Foo(2, &s);
}