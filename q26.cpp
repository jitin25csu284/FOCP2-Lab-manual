#include<iostream>
using namespace std;

class Student{
    int marks[5];
public:
    void input(){
        cout<<"Enter marks of 5 subjects:\n";
        for(int i=0;i<5;i++)
            cin>>marks[i];
    }

    void result(){
        int total=0;

        for(int i=0;i<5;i++)
            total+=marks[i];

        float percent = total/5.0;

        cout<<"Total = "<<total<<endl;
        cout<<"Percentage = "<<percent<<"%";
    }
};

int main(){
    Student s;
    s.input();
    s.result();
}
