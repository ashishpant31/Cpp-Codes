#include<iostream>
#include<string>
using namespace std;
class employee
{
  int empid;
  string name;
  public:
    employee()
    {
      empid=0;
      name="";
    }
    void getdata(int id,string n)
    {
      empid=id;
      name=n;
    }
    void putdata()
    {
      cout<<"\nEmployee id: "<<empid;
      cout<<"\nEmployee name: "<<name<<endl;
    }
};
int main()
{
  int n,empid;
  string name;
  employee *e=new employee;
  employee *e1=new employee;
  employee *e2=new employee;
  cout<<"\nEnter number of employees: ";
  cin>>n;
  cout<<"\nEnter employee id: ";
  cin>>empid;    
  cout<<"Enter employee name: ";
  cin.ignore();
  getline(cin,name);
  e->getdata(empid,name);
  e1->getdata(empid,name);
  e2->getdata(empid,name);
  e->putdata();
  e1->putdata();
  e2->putdata();
  return 0;
}