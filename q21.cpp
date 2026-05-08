#include<iostream>
using namespace std;

class HollowRectangle{
public:
    void display(){
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                if(i==1 || i==8 || j==1 || j==8)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    HollowRectangle h;
    h.display();
}
