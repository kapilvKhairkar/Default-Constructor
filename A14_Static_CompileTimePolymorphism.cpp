//Polymorphism
//TYpes of polymorphism a] Static / Compile Time  b] Run Time
//a]Statice/Compile time polymorphism consists of overloading(function and operator).
//b]Run Time polymorphism consist of overiding of class member from the derieved classes.  
#include<iostream>
using namespace std;
class book{
    private:
        int x;
        int y;
    public:
        book(int x=0,int y=0){
            this->x = x;
            this->y = y;
        }
        //function overloading
        void func(int x){
            cout<<"Sum is : "<<x<<endl;
        }
        void func(int x,int y){
            cout<<"Sum is : "<<x+y<<endl;
        }
        //operator overloading
        book operator+(book b2){
            book b3;
            b3.x = x + b2.x;
            b3.y = y + b2.y;
            return b3;
        }
        void operator-(book b2){
            cout<<"X is :"<<x-b2.x<<"\tY is :"<<y-b2.y<<endl;
        }
        void getDetails(){
            cout<<"Details of X is :"<<x<<"\tY is :"<<y<<endl;
        }
};
int main(){
    book b1(10,20);
    book b2(0,10);
    //function overloading
    b1.func(10);
    b1.func(10,20);
    //operation overloading
    b1-b2;
    book b3;
    b3 = b1+b2;
    b3.getDetails();
    return 0;
}