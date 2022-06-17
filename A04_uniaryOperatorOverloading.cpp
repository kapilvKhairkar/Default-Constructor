#include<iostream>
using namespace std;
class book{
    public:
        int id;
        int price;
        book(int id1,int price1){//parametetrized constructor
            id = id1;
            price = price1;
        }
        /*book(){
            id = 10;
            price = 20;
        }*/
        book operator-(){//operator overloading uniary CAN ALSO USE VOID INSPITE OF book 
            id--;
            price--;
        }
};
int main(){
    book b1(10,20);
    -b1;
    cout<<b1.id<<"\t"<<b1.price;
    return 0;
}