#include <iostream>
using namespace std;

class Prime {
    int n;
public:
    void input() {
        cout<<"Enter number: ";
        cin>>n;
    }

    void check() {
        int flag=0;

        for(int i=2;i<=n/2;i++) {
            if(n%i==0) {
                flag=1;
                break;
            }
        }

        if(flag==0 && n>1)
            cout<<"Prime Number";
        else
            cout<<"Not Prime";
    }
};

int main() {
    Prime p;
    p.input();
    p.check();
}
