#include<iostream>
using namespace std;
class a
{
    int x;
public:
    a(int m)
    {
        x=m;
        cout<<"\nValue of x is: "<<x;
    }
    virtual void show()=0;
};
class b:public a
{
    int y;
public:
    b(int n,int m):a(m)
    {
        y=n;
        cout<<"\nValue of y is: "<<y;
    }
    virtual void show()
    {
        cout<<"\nHello class b";
    }
};
class c:public b
{
    int z;
public:
    c(int p,int m,int n):b(m,n)
    {
        z=p;
        cout<<"\nValue of z is: "<<z;
    }
    void show()
    {
        cout<<"\nHello class c";
    }
};
int main()
{
    c c1(13,4235,545);
}