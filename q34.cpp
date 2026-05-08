#include<iostream>
using namespace std;

class Matrix{
public:
    void add(){
        int a[3][3],b[3][3],c[3][3];

        cout<<"Enter matrix A:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>a[i][j];

        cout<<"Enter matrix B:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>b[i][j];

        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                c[i][j]=a[i][j]+b[i][j];

        cout<<"Sum Matrix:\n";

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
                cout<<c[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main(){
    Matrix m;
    m.add();
}
