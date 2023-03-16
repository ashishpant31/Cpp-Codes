#include<iostream>
#include<string>
using namespace std;
class student
{
	string rollno;
	string name;
	public:
		void getdata()
		{
			cout<<"Enter the rollno of the student: ";
			getline(cin,rollno);
			cout<<"Enter the name of the student: ";
			getline(cin,name);
		}
		void showdata()
		{
			cout<<"Rollno: "<<rollno<<endl;
			cout<<"Name: "<<name;
		}
};
int main()
{
	student s1;
	s1.getdata();
	s1.showdata();
	return 0;
}
