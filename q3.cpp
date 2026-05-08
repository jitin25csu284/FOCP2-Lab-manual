#include <iostream>
using namespace std;

class Temperature {
    float c,f;
public:
    void cToF() {
        cout<<"Enter Celsius: ";
        cin>>c;
        f=(c*9/5)+32;
        cout<<"Fahrenheit = "<<f;
    }

    void fToC() {
        cout<<"Enter Fahrenheit: ";
        cin>>f;
        c=(f-32)*5/9;
        cout<<"Celsius = "<<c;
    }
};

int main() {
    Temperature t;
    int ch;

    cout<<"1.C to F\n2.F to C\n";
    cin>>ch;

    if(ch==1)
        t.cToF();
    else
        t.fToC();
}
