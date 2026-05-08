#include<iostream>
using namespace std;

class Divisible{
public:
    void count(){
        int a[5],c=0;

        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++)
            cin>>a[i];

        for(int i=0;i<5;i++){
            if(a[i]%3==0 && a[i]%5==0)
                c++;
        }

        cout<<"Count = "<<c;
    }
};

int main(){
    Divisible d;
    d.count();
}
