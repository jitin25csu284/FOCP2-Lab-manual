#include <iostream>
using namespace std;

class Order {
    int quantity;
    float price, total;
public:
    void input() {
        cout<<"Enter quantity and price per item: ";
        cin>>quantity>>price;
    }

    void calculate() {
        total = quantity * price;

        if(quantity > 1000)
            total = total - total*0.10;

        cout<<"Total Expense = "<<total;
    }
};

int main() {
    Order o;
    o.input();
    o.calculate();
}
