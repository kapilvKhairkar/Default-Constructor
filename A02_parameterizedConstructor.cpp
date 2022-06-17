#include<iostream>
using namespace std;
class book{
    private:
        int id;
        int price;
    public:
        book(int id1,int price1){
            id = id1;
            price = price1;
        }
        void getdetails(){
            cout<<"Id : "<<id<<"\tPrice is : "<<price;
        }
};
int main(){
    book b1(10,100);
    b1.getdetails();
    return 0;
}
