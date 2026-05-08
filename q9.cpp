#include <iostream>
using namespace std;

class CharacterCheck {
    char ch;
public:
    void input() {
        cout<<"Enter character: ";
        cin>>ch;
    }

    void check() {
        if(isdigit(ch))
            cout<<"Number";

        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
        ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            cout<<"Vowel";

        else
            cout<<"Consonant";
    }
};

int main() {
    CharacterCheck c;
    c.input();
    c.check();
}
