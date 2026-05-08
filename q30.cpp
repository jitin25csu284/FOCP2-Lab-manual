
#include<iostream>
using namespace std;

class Salary{
public:
    void calculate(){
        float s[10],total=0;

        cout<<"Enter salary of 10 employees:\n";

        for(int i=0;i<10;i++){
            cin>>s[i];
            total+=s[i];
        }

        cout<<"Total Salary = "<<total<<endl;
        cout<<"Average Salary = "<<total/10;
    }
};

int main(){
    Salary s;
    s.calculate();
}
