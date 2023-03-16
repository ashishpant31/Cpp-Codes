#include<iostream>
using namespace std;

// No return no arguments

void add()
{
	int a=10,b=20,sum=0;
	sum=a+b;
	cout<<"No return no arguments"<<endl;
	cout<<"Sum is "<<sum<<endl;
}

// Return but no arguments

int add1()
{
	int a=15,b=25;
	return a+b;
}

// No return but has arguments

void add2(int a,int b)
{
	int sum=a+b;	
	cout<<"Sum is "<<sum<<endl;
}

// Return with arguments

int add3(int a,int b)
{
	return a+b;
}

// Pass by value

void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a after swap: "<<a<<"\nb after swap: "<<b<<endl;
}

// Pass by reference

int add4(int &a,int &b)
{
	int c=a+b;
	return c;
}

int main()
{
	add();
	int a1=add1();
	cout<<"\nReturn but no arguments"<<endl;
	cout<<"Sum is "<<a1<<endl;
	cout<<"\nNo return but has arguments"<<endl;
	add2(10,15);
	cout<<"\nReturn with arguments"<<endl;
	int a2=add3(26,73);
	cout<<"Sum is "<<a2<<endl;
	cout<<"\nPass by value";
	cout<<"\na before swap: 10\nb before swap: 20"<<endl;
	swap(10,20);
	cout<<"\nPass by reference";
	int a=50,b=180,result=0;
	result=add4(a,b);
	cout<<"\nSum is "<<result;
	return 0;
}
