#include <iostream>
using namespace std;

class Event {
public:
    void generate(int n) {
        for(int i=1;i<=n;i++) {

            if(i%3==0 && i%5==0)
                cout<<"BuzzFuzz ";
            else if(i%3==0)
                cout<<"Buzz ";
            else if(i%5==0)
                cout<<"Fuzz ";
            else
                cout<<i<<" ";
        }
    }
};

int main() {
    Event e;
    int n;

    cout<<"Enter N: ";
    cin>>n;

    e.generate(n);
}
