#include<iostream>
using namespace std;
int cal(int x,int y){
    return x*y;
}
int cal(int x){
    return x*x;
}
int main()
{
    cout<<cal(3)<<endl;
    cout<<cal(2,3)<<endl;
    return 0;
}