#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
public:
    complex()
    {
        cout<<"\nEnter real value: ";
        cin>>real;
        cout<<"Enter imaginary value: ";
        cin>>imaginary;
        cout<<"Complex value is: "<<real<<" + "<<imaginary<<"i"<<endl;
        
    }
    complex(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        imaginary=c1.imaginary+c2.imaginary;
        cout<<"\nValue of complex numbers after adding: ";
        cout<<real<<" + "<<imaginary<<"i";
    }
};
int main()
{
    complex c1,c2,c3(c1,c2);
    return 0;
}