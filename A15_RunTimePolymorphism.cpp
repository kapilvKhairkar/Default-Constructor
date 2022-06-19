#include<iostream>
using namespace std;
class A{
    public:
        int x = 10;
        void test(){
            cout<<"Test function inside class A"<<endl;
        }
        void show(){
            cout<<"Value of X is: "<<x<<endl;
        }
};
class B:public A{
    public:
        int x = 20;
        void test(){
            cout<<"Test function inside class B"<<endl;
        }
        void show(){
            cout<<"Value of X is: "<<x<<endl;
        }
};
int main(){
    B b;
    b.test();
    b.show();
    A a;
    a.test();
    a.show();
    return 0;
}