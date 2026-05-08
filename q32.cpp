#include<iostream>
using namespace std;

class Largest{
public:
    void find(){
        int a[5],max1,max2;

        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++)
            cin>>a[i];

        max1=max2=a[0];

        for(int i=1;i<5;i++){
            if(a[i]>max1){
                max2=max1;
                max1=a[i];
            }
            else if(a[i]>max2 && a[i]!=max1)
                max2=a[i];
        }

        cout<<"Largest = "<<max1<<endl;
        cout<<"Second Largest = "<<max2;
    }
};

int main(){
    Largest l;
    l.find();
}
