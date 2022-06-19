#include<iostream>
using namespace std;
class book{
    public:
        int id;
        int price;
        int rank;
        static int objectcount;
        book(int id=0,int price=0,int rank=0){
            //parameterized constructor + default constructor
            this->id = id;
            this->price = price;
            this->rank = rank;
            objectcount++;
        }
        void getDetails(){
            cout<<id<<"\t"<<price<<"\t"<<rank<<endl;
        }
        static int getObjectCount(){
            return objectcount;
        }
};

int book::objectcount = 0;//initailaize static memeber variable(Class Variable) to zero 
int main(){
    cout<<book::getObjectCount()<<endl;
    cout<<book::objectcount<<endl;
    book b1(1,2,3);
    cout<<book::objectcount<<endl;
    cout<<book::getObjectCount();
}