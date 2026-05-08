#include <iostream>
using namespace std;

class LeapYear {
    int year;
public:
    void input() {
        cout<<"Enter year: ";
        cin>>year;
    }

    void check() {
        if((year%4==0 && year%100!=0) || year%400==0)
            cout<<"Leap Year";
        else
            cout<<"Not Leap Year";
    }
};

int main() {
    LeapYear l;
    l.input();
    l.check();
}
