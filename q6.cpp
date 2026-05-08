#include <iostream>
using namespace std;

class Employee {
    int n;
public:
    void calculate() {
        cout<<"Enter number of employees: ";
        cin>>n;

        for(int i=1;i<=n;i++) {
            float salary,bonus,net;

            cout<<"Enter salary: ";
            cin>>salary;

            bonus=salary*0.12;
            net=salary+bonus;

            cout<<"Bonus="<<bonus<<" Net Salary="<<net<<endl;
        }
    }
};

int main() {
    Employee e;
    e.calculate();
}
