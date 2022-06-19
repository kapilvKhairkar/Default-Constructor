#include<iostream>
using namespace std;
class Book{
    public:
        int id;
        int price;
        Book(){
            id = 0;
            price = 0;
        }
        Book(int id,int price){
            this->id = id;
            this->price = price;
        }
        Book(Book&b2){
            id = b2.id;
            price = b2.price;
        }
        void operator-(Book b2){
            cout<<id-b2.id<<"\t"<<price - b2.price;
        }
        inline void operator+(Book b2){
            //Inline function
            /*Book b3;
            b3.id = id + b2.id;
            b3.price = price + b2.price;
            return b3;*/
            cout<<id + b2.id<<"\t"<<price + b2.price;
        }
        void getdetails(){
            cout<<id<<"\t"<<price;
        }
};
int main(){
    Book b1(10,20);
    Book b2(0,10);
    Book b3;
    b1 + b2;
    cout<<endl;
    b1-b2;
    return 0;
}