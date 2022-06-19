#include<iostream>
using namespace std;
int good(){
    static int x=1;//initialize only once
    x++;
    int y=1;//initaliaze various times
    y++;
    cout<<"x and y are: "<<x<<"\t"<<y<<endl;
}
int main()
{
    good();
    good();
    return 0;
}