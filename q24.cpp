#include<iostream>
using namespace std;

class AlphabetPattern{
public:
    void display(){
        for(char i='A'; i<='E'; i++){
            for(char j='A'; j<=i; j++)
                cout<<j;
            cout<<endl;
        }
    }
};

int main(){
    AlphabetPattern a;
    a.display();
}
