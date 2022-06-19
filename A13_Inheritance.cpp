//TYPES OF INHERITANCE
/*
1.Single Inheritance : a->b
2.Multiple Inheritance : b,c->a
3.Multilevel Inheritance : a->b->c
4.Hybrid Inheritance : a->b,c->d
5.Heirachial Inheritance :  a->b,c
*/
//EXAMPLE OF SINGLE INHERITANCE
#include<iostream>
using namespace std;
class A{
    //parent class[SUPER]
    public:
        int x = 10;
        int c = 0;
        void getvaluex(){
            cout<<"inside class A and value is: "<<x<<endl;
        }
};
class B:public A{
    //child class[SUB|derived]
    public:
        int y = 20;
        int c = 10;
        void getvaluey(){
            cout<<"inside class B and value is: "<<y<<endl;
        }
};
int main(){
    A a;
    a.getvaluex();
    B b;
    b.getvaluex();
    b.getvaluey();
    cout<<"C value is:"<<a.c<<endl;
    cout<<"C value is:"<<b.c<<endl;
    return 0;
}
