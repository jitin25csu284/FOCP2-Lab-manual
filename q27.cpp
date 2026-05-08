#include<iostream>
using namespace std;

class Price{
public:
    void maxPrice(){
        float a[10],max;

        cout<<"Enter prices:\n";
        for(int i=0;i<10;i++)
            cin>>a[i];

        max=a[0];

        for(int i=1;i<10;i++){
            if(a[i]>max)
                max=a[i];
        }

        cout<<"Maximum Price = "<<max;
    }
};

int main(){
    Price p;
    p.maxPrice();
}
