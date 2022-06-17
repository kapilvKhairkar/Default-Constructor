#include<iostream>
using namespace std;
class book{
    private:
        int bookid;
        string bookname;
    public:
        int bookprice = 200;
        book(){
            bookid = 1011;
            bookname = "Learn and Earn";
        }
        int getbookid(){
            return bookid;
        }

};
int main(){
    book book1;
    cout<<book1.getbookid();
    cout<<"\nBook price is :"<<book1.bookprice;
    return 0;
}