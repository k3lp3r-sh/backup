#include <iostream>
using namespace std;
class Distance {
    public:
        int feet, inch;
        Distance(int f, int i){
            feet = f;
            inch = i;
        }
        void operator ++ (){
            ++feet;
            ++inch;
            cout << "Pre Increment: " << "Feet: " << feet <<  " Inch: " << inch << endl;
        }
        void operator -- (){
            feet--;
            inch--;
            cout << "Pre Decrement: " << "Feet: " << feet <<  " Inch: " << inch << endl;
        }
};

int main(){

    Distance d1(8,9);
    ++d1;
    --d1;
    return 0;
}
