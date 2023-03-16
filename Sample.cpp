#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	switch(num)
	{
		case 1 ... 3:
			{
				cout<<"The number you have entered is: "<<num;
				break;
			}
			case 4:
				{
					cout<<"The number you have entered is "<<num<<" so "<<num<<"^2 is "<<pow(num,2);
					break;
				}
				case 5 ... 10:
				{
					cout<<num<<" is greater than 4";
					break;
				}
				default:
					cout<<"Worng Entry!!!";
	}
	return 0;
}
