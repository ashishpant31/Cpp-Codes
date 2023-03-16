#include<iostream>
#include<string>
using namespace std;
class employee
{
  int sal;
  string name,department,designation;
  public:
    employee()
    {
      sal=0;
      name=department=designation="a";
    }
    void getdata()
    {
      cout<<"\nEnter name of employee: ";
      cin.ignore();
      getline(cin,name);
      cout<<"Enter department: ";
      getline(cin,department);
      cout<<"Enter designation: ";
      getline(cin,designation);
      cout<<"Enter salary: ";
      cin>>sal;
    }
    void putdata()
    {
      cout<<"\nName: "<<name<<endl;
      cout<<"Department: "<<department<<endl;
      cout<<"Designtion: "<<designation<<endl;
      cout<<"Salary: "<<sal<<endl;
    }
    void showdata(string dept)
    {
      if(dept==department)
      {
        cout<<"\nName: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Designtion: "<<designation<<endl;
        cout<<"Salary: "<<sal<<endl;
      }
    }
    ~employee()
    {
      cout<<"Destructor envoked!!!";
    }
};
int main()
{
  employee e=employee();
  e.putdata();
  int n;
  cout<<"\nEnter nunber of employees whose data you want to enter: ";
  cin>>n;
  employee *e1=new employee[n];
  for(int i=0;i<n;i++)
  {
    e1[i].getdata();
  }
  cout<<"\nDetails are displayed as:"<<endl;
  for(int i=0;i<n;i++)
  {
    e1[i].putdata();
  }
  string dept;
  cout<<"\nEnter department name: ";
  cin.ignore();
  getline(cin,dept);
  for(int i=0;i<1;i++)
  {
    e.showdata(dept);
  }
  return 0;
}