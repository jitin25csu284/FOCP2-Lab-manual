#include <iostream>
using namespace std;

class Swap {
    int a,b;
public:
    void input() {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }

    void swapNumbers() {
        int temp=a;
        a=b;
        b=temp;

        cout<<"After Swap: "<<a<<" "<<b;
    }
};

int main() {
    Swap s;
    s.input();
    s.swapNumbers();
}
