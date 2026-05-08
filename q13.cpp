#include <iostream>
#include <cmath>
using namespace std;

class Quadratic {
    float a,b,c,d,r1,r2;
public:
    void input() {
        cout<<"Enter a b c: ";
        cin>>a>>b>>c;
    }

    void roots() {
        d = b*b - 4*a*c;

        if(d>0) {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            cout<<"Roots: "<<r1<<" "<<r2;
        }
        else if(d==0) {
            r1=-b/(2*a);
            cout<<"Equal Roots: "<<r1;
        }
        else
            cout<<"Imaginary roots";
    }
};

int main() {
    Quadratic q;
    q.input();
    q.roots();
}
