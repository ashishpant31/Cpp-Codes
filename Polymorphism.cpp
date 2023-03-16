/*
2 num, 2 string, string number
*/
#include<iostream>
#include<string>
using namespace std;
void add(int a,int b)
{
  int c=a+b;
  cout<<"After adding "<<a<<" and "<<b<<": "<<c<<endl;
}
void add(string a,string b)
{
  string c=a+" "+b;
  cout<<"After concatinating strings resulting string: "<<c<<endl;
}
int add(int a,char b)
{
  cout<<"After concatinating: "<<a+(int)b<<endl;
}
int main()
{
  int n1,n2=0;
  string a,b="";
  char c;
  cout<<"Enter 2 numbers: ";
  cin>>n1>>n2;
  cout<<"Enter 2 strings: ";
  cin>>a>>b;
  cout<<"Enter a character: ";
  cin>>c;
  add(n1,n2);
  add(a,b);
  add(n1,c);
  return 0;
}