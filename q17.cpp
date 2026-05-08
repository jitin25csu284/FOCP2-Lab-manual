#include <iostream>
using namespace std;

class NumberCheck {
    int n;
public:
    void input() {
        cout<<"Enter number: ";
        cin>>n;
    }

    void check() {
        int sum=0,temp=n;

        for(int i=1;i<n;i++) {
            if(n%i==0)
                sum+=i;
        }

        if(sum==n)
            cout<<"Perfect Number\n";
        else
            cout<<"Not Perfect\n";

        int arm=0,r;
        temp=n;

        while(temp>0) {
            r=temp%10;
            arm+=r*r*r;
            temp/=10;
        }

        if(arm==n)
            cout<<"Armstrong Number";
        else
            cout<<"Not Armstrong";
    }
};

int main() {
    NumberCheck n;
    n.input();
    n.check();
}
