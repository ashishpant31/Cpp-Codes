/*
WAP to create a class named student. Use rollno,name,marks as data members.
Calculate %age of marks of 3 students and display their records.
Solve this question using: 
1. Array of objects
2. Pointer Object
3. Array of objects
*/

#include<iostream>
#include<string>
using namespace std;
class student
{
  int roll_no;
  string name;
  float tmarks;
  public:
    student()
    {
      roll_no=0;
      name="";
      tmarks=0.0;
    }
    void getdata()
    {
      cout<<"\nEnter rollno: ";
      cin>>roll_no;
      cout<<"Enter name: ";
      cin.ignore();
      getline(cin,name);
      cout<<"Enter marks obtained (out of 500): ";
      cin>>tmarks;
    }
    void percentage()
    {
      float percent=tmarks/3;
      cout<<"\nPercentage calculated: "<<percent<<endl;
    }
    void putdata()
    {
      cout<<"\nDetails are displayed as: ";
      cout<<"\nRollno: "<<roll_no;
      cout<<"\nName: "<<name;
      cout<<"\nMarks: "<<tmarks;
      percentage();
    }
};
int main()
{
  cout<<"\n********** Using Array of Objects **********";
  student s[3];
  for(int i=0;i<3;i++)
  {
    s[i].getdata();
  }
  for(int i=0;i<3;i++)
  {
    s[i].putdata();
  }
  cout<<"\n********** Using Pointer Objects **********";
  student *sptr=new student,*sptr1=new student,*sptr2=new student;
  sptr->getdata();
  sptr1->getdata();
  sptr2->getdata();
  sptr->putdata();
  sptr1->putdata();
  sptr2->putdata();
  cout<<"\n********** Using Array of Pointers **********";
  student *ptr=new student[3];
  for(int i=0;i<3;i++)
  {
    ptr[i].getdata();
  }
  for(int i=0;i<3;i++)
  {
    ptr[i].putdata();
  }
  return 0;
}