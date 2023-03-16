/*
Create a class student with roll no, name, course, semester as data members. Create a friend class elective with
roll no, elective_id, elective_name, duration as data members. Student can opt for max 1 elective.
Create queries for
1. Identify students opted for CS.
2. Search for student's roll no and find the elective chosen by him/her.
3. Find the total count of students in each electives.
*/

#include<iostream>
#include<string>
using namespace std;
int ml=0,py=0,cs=0,ss=0;
void clac();
class student
{
    int rollno;
    string name, course;
    int sem;
public:
    friend class elective;
    student()
    {
        rollno=0;
        name=course="";
        sem=0;
    }
    void getdata()
    {
        cout<<"\nEnter rollno: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter course: ";
        getline(cin,course);
        cout<<"Enter semester: ";
        cin>>sem;
    }
    void putdata()
    {
        cout<<"\n\nRollno: "<<rollno;
        cout<<"\nName: "<<name;
        cout<<"\nCourse: "<<course;
        cout<<"\nSemester: "<<sem;
    }
};
class elective
{
    int rollno, elective_id;
    string elective_name, duration;
public:
    elective()
    {
        rollno=elective_id=0;
        elective_name=duration="";
    }
    void enterdata(student s)
    {
        rollno=s.rollno;
        int ch;
        data:
            cout<<"\n1. Machine Learning\n2. Python\n3. Cyber Security\n4. Soft Skills";
            cout<<"\nChoose Elective: ";cin>>ch;
        switch(ch)
        {
            case 1:
            {
                elective_name="Machine Learning";
                elective_id=210;
                duration="10-12 months";
                ml++;
                break;
            }
            case 2:
            {
                elective_name="Python";
                elective_id=211;
                duration="6-8 months";
                py++;
                break;
            }
            case 3:
            {
                elective_name="Cyber Security";
                elective_id=212;
                duration="5-6 months";
                cs++;
                break;
            }
            case 4:
            {
                elective_name="Soft Skills";
                elective_id=213;
                duration="2-3 months";
                ss++;
                break;
            }
            default:
            {
                cout<<"\nWrong Entry, so choose again!!";
                goto data;
            }
        }
    }
    void showdata(student s)
    {
        cout<<"\nElective id: "<<elective_id;
        cout<<"\nElective: "<<elective_name;
        cout<<"\nDuration: "<<duration<<endl;
    }
    void showdata(student s,string choice)
    {
        if(choice==elective_name)
        {
            cout<<"\n\nRollno: "<<s.rollno;
            cout<<"\nName: "<<s.name;
            cout<<"\nCourse: "<<s.course;
            cout<<"\nSemester: "<<s.sem;
        }
    }
    void display(student s,int roll)
    {
        if(roll==s.rollno)
        {
            cout<<"\nName: "<<s.name;
            cout<<"\nCourse: "<<s.course;
            cout<<"\nSemester: "<<s.sem;
            cout<<"\nElective: "<<elective_name;
        }
    }
};
void calc()
{
    cout<<"\n\nMachine Learning: "<<ml;
    cout<<"\nPython: "<<py;
    cout<<"\nCyber Security: "<<cs;
    cout<<"\nSoft Skills: "<<ss;
}
int main()
{
    int n;
    cout<<"\nEnter number of students whose data you want to enter: ";
    cin>>n;
    student s[n];  
    elective e[n];
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
        e[i].enterdata(s[i]);
    }
    cout<<"\n\n******************************";
    for(int i=0;i<n;i++)
    {
        s[i].putdata();
        e[i].showdata(s[i]);
    }
    cout<<"\n******************************";
    string choice;
    cout<<"\n\nEnter subject whose details you want to see: ";
    cin.ignore();
    getline(cin,choice);
    cout<<"\nStudents in "<<choice;
    for(int i=0;i<n;i++)
    {
        e[i].showdata(s[i],choice);
    }
    cout<<"\n\n******************************";
    int roll;
    cout<<"\n\nEnter rollno of the student: ";
    cin>>roll;
    for(int i=0;i<n;i++)
    {
        e[i].display(s[i],roll);
    }
    cout<<"\n\n******************************";
    cout<<"\n\nStudents in each elective";
    calc();
}
