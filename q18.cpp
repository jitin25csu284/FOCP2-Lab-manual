#include <iostream>
using namespace std;

class Palindrome {
    int n,rev=0,temp;
public:
    void input() {
        cout<<"Enter number: ";
        cin>>n;
    }

    void check() {
        temp=n;

        while(temp>0) {
            rev=rev*10+temp%10;
            temp/=10;
        }

        if(rev==n)
            cout<<"Palindrome";
        else
            cout<<"Not Palindrome";
    }
};

int main() {
    Palindrome p;
    p.input();
    p.check();
}
