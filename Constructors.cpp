#include<iostream>
#include<string>
using namespace std;
/*class student
{
  int rollno;
  string name;
  int age;
  public:
    void putdata()
    {
      cout<<"Enter rollno: ";
      cin>>rollno;
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter age: ";
      cin>>age;
    }
    void getdata()
    {
      cout<<"Rollno: "<<rollno<<endl<<"Name: "<<name<<endl<<"Age: "<<age;
    }
    student()
    {
      rollno=-1;
      cout<<"Rollno: "<<rollno<<endl;;
      name="";
      cout<<"Name: "<<name<<endl;
      age=0;
      cout<<"Age: "<<age<<endl;
    }
};*/
class rectangle
{
  long length;
  long breadth;
  double area;
  public:
    rectangle()
    {
      length=0.0;
      breadth=0.0;
      area=0.0;
    }
    void rect_area()
    {
      cout<<"Enter the length of rectangle: ";
      cin>>length;
      cout<<"Enter the breadth of the reactangle: ";
      cin>>breadth;
      area=length*breadth;
      cout<<"Area = "<<area<<endl;
    }
    void add_sum(rectangle r,rectangle rr)
    {
      cout<<r.area<<rr.area;
      area=r.area+rr.area;
      cout<<"Sum = "<<area;
    }
};
int main() 
{
  //student s1;
  //s1.putdata();
  rectangle r1,r2,r;
  r1.rect_area();
  r2.rect_area();
  r.add_sum(r1,r2);
  return 0;
}