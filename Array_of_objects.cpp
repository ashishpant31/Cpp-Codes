#include <iostream>
#include <string>
using namespace std;
class student
{
  int rollno;
  string name;
  string subjects[3];

public:
  student()
  {
    rollno = 0;
    name = "";
    for (int i = 0; i < 3; i++)
    {
      subjects[i] = "";
    }
  }
  void getdata()
  {
    cout << "\nEnter rollno of the student: ";
    cin >> rollno;
    cout << "Enter name of the student: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the subjects: ";
    for (int i = 0; i < 3; i++)
    {
      cin.ignore();
      getline(cin, subjects[i]);
    }
  }
  void putdata()
  {
    cout << "\nRollno: " << rollno << "\nName: " << name << "\nSubjects: ";
    for (int i = 0; i < 3; i++)
    {
      cout << subjects[i];
      cout << endl;
    }
  }
};
int main()
{
  student s1[3];
  for (int i = 0; i < 3; i++)
  {
    s1[i].getdata();
  }
  for (int i = 0; i < 3; i++)
  {
    s1[i].putdata();
  }
  return 0;
}
