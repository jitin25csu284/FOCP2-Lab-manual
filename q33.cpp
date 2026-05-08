#include<iostream>
using namespace std;

class Marks{
public:
    void display(){
        int m[3][5];

        cout<<"Enter marks:\n";

        for(int i=0;i<3;i++)
            for(int j=0;j<5;j++)
                cin>>m[i][j];

        cout<<"2nd subject of 1st student = "<<m[0][1]<<endl;
        cout<<"5th subject of 3rd student = "<<m[2][4];
    }
};

int main(){
    Marks m;
    m.display();
}
