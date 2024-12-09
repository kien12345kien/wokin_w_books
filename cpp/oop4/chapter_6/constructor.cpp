#include <iostream>

using namespace std;

class Counter{
    private:
        int count;
    
    public:
        Counter(): count(0) {}                   //Constructor

        void inc_count()    {
            count ++;
        }

        int get_count(){
            return count;
        }

};

int main(){
    Counter c1, c2;
    cout << c1.get_count();
    cout << c2.get_count();

    c1.inc_count();
    c2.inc_count();

    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;

    return 0;
}