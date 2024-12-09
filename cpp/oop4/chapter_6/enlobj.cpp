#include <iostream>

using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        void setdist(int ft, float in){
            feet = ft;
            inches = in;
        }

        void getdist(){
            cin >> feet;
            cin >> inches;
        }

        void showdist(){
            cout << feet << endl << inches << endl;
        }
};

int main(){
    Distance dist1, dist2;

    dist1.setdist(11, 6.26);

    dist2.getdist();

    dist1.showdist();
    dist2.showdist();

    return 0;
}