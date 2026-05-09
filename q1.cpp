#include <iostream>
using namespace std;

class Average {
    float a,b,c;
public:
    void input() {
        cout<<"Enter three marks: ";
        cin>>a>>b>>c;
    }

    void calculate() {
        cout<<"Average = "<<(a+b+c)/3;
    }
};

int main() {
    Average obj;
    obj.input();
    obj.calculate();
}
