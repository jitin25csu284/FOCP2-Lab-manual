#include<iostream>
using namespace std;

class StringProcess{
public:
    void process(){
        string s;
        cout<<"Enter string: ";
        getline(cin,s);

        int words=0,digits=0,special=0;

        for(int i=0;i<s.length();i++){
            if(isdigit(s[i]))
                digits++;
            else if(!isalnum(s[i]) && s[i]!=' ')
                special++;
        }

        for(int i=0;i<s.length();i++){
            if(s[i]==' ')
                words++;
        }

        words++;

        cout<<"Words = "<<words<<endl;
        cout<<"Digits = "<<digits<<endl;
        cout<<"Special Characters = "<<special;
    }
};

int main(){
    StringProcess s;
    s.process();
}
