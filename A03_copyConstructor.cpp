#include<iostream>
using namespace std;
class book{
    private:
        int id;
        int price;
        string name;
    public:
        book(int id1,int price1,string name1){
            id = id1;
            price = price1;
            name = name1;
        }
        book(const book &b2){
            id = b2.id;
            price = b2.price;
            name = b2.name;
        }
        void getdetails(){
            cout<<"Details are :"<<id<<"\t price and name is : "<<price<<"\t"<<name;
        }
};
int main(){
    book b1(10,100,"Hello world");
    //b1.getdetails();
    //cout<<endl;
    book b2 = b1;
    b2.getdetails();
    return 0;
}