#include <iostream>
using namespace std;

class Circle {
    float r;
public:
    void input() {
        cout<<"Enter radius: ";
        cin>>r;
    }

    void area() {
        cout<<"Area = "<<3.14*r*r;
    }
};

int main() {
    Circle c;
    c.input();
    c.area();
}
