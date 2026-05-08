#include<iostream>
using namespace std;

class Temperature{
public:
    void minimum(){
        float t[30],min;

        cout<<"Enter 30 temperatures:\n";

        for(int i=0;i<30;i++)
            cin>>t[i];

        min=t[0];

        for(int i=1;i<30;i++){
            if(t[i]<min)
                min=t[i];
        }

        cout<<"Minimum Temperature = "<<min;
    }
};

int main(){
    Temperature t;
    t.minimum();
}
