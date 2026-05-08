#include <iostream>
using namespace std;

class Bill {
    int item,qty;
    float price,amount,discount;
public:
    void input() {
        cout<<"Enter item no, quantity, price: ";
        cin>>item>>qty>>price;
    }

    void calculate() {
        amount=qty*price;
        discount=amount*0.20;

        cout<<"Total = "<<amount<<endl;
        cout<<"Discount = "<<discount<<endl;
        cout<<"Final Bill = "<<amount-discount;
    }
};

int main() {
    Bill b;
    b.input();
    b.calculate();
}
