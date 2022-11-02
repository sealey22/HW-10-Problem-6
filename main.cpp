#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

  struct car
  {
  int number;
  int miles;
  int gallons;
 } ;


  cout << " Enter car number: ";
  cin >> car.number;

  cout << " Enter miles driven: ";
  cin >> car.miles;

  cout << "Enter gallons: ";
  cin >> car.gallons;

  cout << " ------------------------------------------------------------";

  cout << "\nCar number: " << " " << car.number << "\n" <<
    "Gallons used: " << " " << car.miles << "\n" << 
    "Miles driven: " << " " << car.gallons << endl;
  
  
  
  return 0;
  
  }