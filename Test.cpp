// Create array of objects of a class employee with empid, name, salary and designation. Manipulate the data using pointers.

#include<iostream>
#include<string>
using namespace std;
class employee
{
    int empid;
    string name,desig;
    float sal;
    public:
        employee()
        {
            empid=0;
            name=desig="";
            sal=0.0;
        }
        void getdata()
        {
            cout<<"\nEnter employee id: ";
            cin>>empid;
            cout<<"Enter name of the employee: ";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter designation: ";
            getline(cin,desig);
            cout<<"Enter salary of the employee: ";
            cin>>sal;
        }
        void putdata()
        {
            cout<<"\n\nEmployee id: "<<empid;
            cout<<"\nName: "<<name;
            cout<<"\nDesignation: "<<desig;
            cout<<"\nSalary: "<<sal<<endl;
        }
        void newdata()
        {
            cout<<"\nEnter new employee id: ";
            cin>>empid;
            cout<<"Enter new name of the employee: ";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter new designation: ";
            getline(cin,desig);
            cout<<"Enter new salary of the employee: ";
            cin>>sal;
        }
        ~employee()
        {
            cout<<"\nDestructor envoked!!! Program executed!!!";
        }
};
int main()
{
    int n;
    cout<<"\nEnter number of employees: ";
    cin>>n;
    employee e[n];
    for(int i=0;i<n;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
        e[i].putdata();
    }
    employee *e1=new employee;
    e1->newdata();
    e1->putdata();
    return 0;
}