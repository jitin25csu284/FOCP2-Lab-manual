#include <iostream>
using namespace std;

class Pattern {
public:
    void print() {

        for(int i=1;i<=3;i++) {
            for(int j=1;j<=5;j++) {
                cout<<j<<" ";
            }
            cout<<endl;
        }

    }
};

int main() {
    Pattern p;
    p.print();
}
