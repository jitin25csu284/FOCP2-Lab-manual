#include <iostream>
using namespace std;

class Calculator {
public:
    void calculate() {
        int ch;
        float a,b;

        do {
            cout<<"\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
            cin>>ch;

            if(ch>=1 && ch<=4) {
                cout<<"Enter two numbers: ";
                cin>>a>>b;
            }

            switch(ch) {
                case 1: cout<<"Result="<<a+b; break;
                case 2: cout<<"Result="<<a-b; break;
                case 3: cout<<"Result="<<a*b; break;
                case 4: cout<<"Result="<<a/b; break;
            }

        } while(ch!=5);
    }
};

int main() {
    Calculator c;
    c.calculate();
}
