/*
Create a class plant. Create plantname, plantheight, planttype and price as
members.
1. Initializd all the data members as zero and NULL at the time of object
creation.
2. Write a copy constructor to copy the data of one object to another object.
3. Write a user defined function to pass values taken from user to newly created
object.
4. Function to display data.
5. Create a destructor which will display "Destructor evoked. Program
terminated".
*/
#include <iostream>
#include <string>
using namespace std;
class plant {
  string plant_name, plant_type;
  float plant_height, price;

public:
  plant() {
    plant_name = plant_type = "";
    plant_height = price = 0.0;
  }
  plant(plant &p) {
    plant_name = p.plant_name;
    plant_type = p.plant_type;
    plant_height = p.plant_height;
    price = p.price;
  }
  void getdata(string name, string type, float height, float p_price) {
    plant_name = name;
    plant_type = type;
    plant_height = height;
    price = p_price;
  }
  void showdata() {
    cout << "\nDetails are displayed as follows: \n" << endl;
    cout << "Plant name: " << plant_name << endl;
    cout << "Plant type: " << plant_type << endl;
    cout << "Plant height: " << plant_height << endl;
    cout << "Price: " << price << endl;
  }
  ~plant() { cout << "\nDestructor invoked, Program terminated!!!\n"; }
};
int main() {
  string name, type;
  float height, p_price;
  cout << "Enter the name of the plant: ";
  cin >> name;
  cout << "Enter the type of the plant: ";
  cin >> type;
  cout << "Enter the height of the plant: ";
  cin >> height;
  cout << "Enter price of the plant: ";
  cin >> p_price;
  plant p1;
  p1.getdata(name, type, height, p_price);
  p1.showdata();
  plant p2(p1);
  p2.showdata();
  return 0;
}