#include<iostream>
using namespace std;

class Username{
public:
    void check(){
        string s;
        cout<<"Enter username: ";
        cin>>s;

        int valid=1;

        for(int i=0;i<s.length();i++){
            if(!isalnum(s[i])){
                valid=0;
                break;
            }
        }

        if(valid)
            cout<<"Valid Username";
        else
            cout<<"Invalid Username";
    }
};

int main(){
    Username u;
    u.check();
}
