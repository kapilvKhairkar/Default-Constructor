#include<iostream>
using namespace std;
class book{
    private:
        int id;
        int price;
    public:
        book(int id=0,int price=0){
            this->id = id;
            this->price = price;
        }
        friend void getDetails(book b2);
        int getId();
};
int book::getId(){
    return id;
}
void getDetails(book b2){
    cout<<b2.id<<"\t\t"<<b2.price<<endl;
}
int main(){
    book b1(12,24);
    cout<<"ID is:"<<b1.getId()<<endl;
    getDetails(b1);
    return 0;
}