#include<iostream>
using namespace std;
class pointA{
    private:
        int xa;
        int ya;
        friend class pointB;
    public:
        pointA(int xa=0,int ya=0){
            this->xa = xa;
            this->ya = ya;
        }
};
class pointB{
    private:
        int xb;
        int yb;
    public:
        pointB(int xb,int yb);
        void getXdetails(pointA a){
            cout<<"X:"<<a.xa<<"\t\tY:"<<a.ya<<endl;
        }
};
pointB::pointB(int xb,int yb){
    this->xb = xb;
    this->yb = yb;
}
int main()
{
    pointA a(1,3);
    pointB b(2,5);
    b.getXdetails(a);
    return 0;
}