#include<iostream>
using namespace std;
class Book{
    public:
        int id;
        int price;
        Book(){
            id = 30 ;
            price = 30;
        }
        Book(int id1,int price1){
            id = id1;
            price = price1;
        }
        Book operator-(Book&b2){
            //OR Book operator-(Book b2)
            Book b3;
            b3.id = id - b2.id;
            b3.price = price - b2.price;
            //cout<<price<<"\t\t"<<b2.price<<endl;
            //cout<<b3.id<<"\t"<<b3.price<<endl;
            return b3;
        }
};
int main()
{
    Book b1;
    Book b2(10,20);
    Book b3;
    b3 = b1 - b2;
    cout<<b3.id<<"\t"<<b3.price;
    return 0;
}