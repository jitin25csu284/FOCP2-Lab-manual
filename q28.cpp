#include<iostream>
using namespace std;

class EvenOdd{
public:
    void calculate(){
        int a[5],even=0,odd=0;

        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++)
            cin>>a[i];

        for(int i=0;i<5;i++){
            if(a[i]%2==0)
                even+=a[i];
            else
                odd+=a[i];
        }

        cout<<"Even Sum = "<<even<<endl;
        cout<<"Odd Sum = "<<odd;
    }
};

int main(){
    EvenOdd e;
    e.calculate();
}
