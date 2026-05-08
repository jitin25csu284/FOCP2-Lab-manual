
#include <iostream>
using namespace std;

class Triangle {
    int a,b,c;
public:
    void input() {
        cout<<"Enter three sides: ";
        cin>>a>>b>>c;
    }

    void type() {
        if(a==b && b==c)
            cout<<"Equilateral Triangle";

        else if(a==b || b==c || a==c)
            cout<<"Isosceles Triangle";

        else
            cout<<"Scalene Triangle";
    }
};

int main() {
    Triangle t;
    t.input();
    t.type();
}
