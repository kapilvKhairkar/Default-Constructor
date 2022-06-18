//Learn how to access class from outside and also when to use {this->} operator   
#include<iostream>
using namespace std;
class Book{
    public:
        string name;
        int id;
        int price;
        Book(const Book&b2);
        ~Book();//destructer
        Book();
        Book(string name,int id,int price){
            //parameterized constructor
            //this is used when we assign same variable name for alloaction
            this->name = name;
            this->id = id;
            this->price = price;
        }
        void getDetails(){
            cout<<"Details: "<<name<<"\t"<<id<<" and its price is:"<<price<<endl; 
        }
};
Book::Book(){
    //default constructor        
    name = "Who am I??";
    id = 000;
    price = 20000;
}
Book::Book(const Book&b2){
    // copy constructor
    name = b2.name;
    id = b2.id;
    price = b2.price;
}
Book::~Book(){
}
int main()
{
    Book b1("You Can",1,1000);
    Book b3;
    Book b2 = b1;
    b3.getDetails();
    return 0;
}