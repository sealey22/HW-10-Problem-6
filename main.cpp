#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

  struct
  {
  double number[5];
  float miles[5];
  double gallons[5];
 } car;


for (int i = 0 ; i < 5; i++){

  cout << "Enter car number: ";
  cin >> car.number[i];

  cout << "Enter miles driven: ";
  cin >> car.miles[i];

  cout << "Enter gallons: ";
  cin >> car.gallons[i];

  cout << " ------------------------------------------------------------";

  double mph = (car.miles[i]) / (car.gallons[i]);

  cout << "\nCar number: " << " " << car.number[i] << "\n"
       << "Miles per Gallon: " << mph << endl;

  cout << " ------------------------------------------------------------" << endl << endl;
   
    
    
    // "Gallons used: " << " " << car.miles[0] << "\n" << 
   // "Miles driven: " << " " << car.gallons[0] << endl;
  }
  
  
  
  return 0;
  
  }