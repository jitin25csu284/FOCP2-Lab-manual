#include <iostream>
using namespace std;

class PrimeRange {
public:
    void display(int a,int b) {

        for(int i=a;i<=b;i++) {

            int flag=0;

            for(int j=2;j<=i/2;j++) {
                if(i%j==0) {
                    flag=1;
                    break;
                }
            }

            if(flag==0 && i>1)
                cout<<i<<" ";
        }
    }
};

int main() {
    PrimeRange p;
    int a,b;

    cout<<"Enter range: ";
    cin>>a>>b;

    p.display(a,b);
}
