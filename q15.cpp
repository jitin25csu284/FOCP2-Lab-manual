#include <iostream>
using namespace std;

class Largest {
public:
    void findLargest() {
        int n,x,max;

        cout<<"Enter how many numbers: ";
        cin>>n;

        cout<<"Enter numbers:\n";
        cin>>max;

        for(int i=2;i<=n;i++) {
            cin>>x;
            if(x>max)
                max=x;
        }

        cout<<"Largest = "<<max;
    }
};

int main() {
    Largest l;
    l.findLargest();
}
