#include <iostream>
using namespace std;

const double DOLLARS_PER_GALLON = 12; // how much does a gallon of gas cost?
const double MILES_PER_COMMUTE = 20.5; // miles of your commute (round trip)
const double MILES_PER_GALLON = 36; // miles per gallon of your car

double myTempF;
double myTempC;

// Converts degrees Fahrenheit to Celsius
double toCommutes(double gasDollars) {
  double gasGallons;
  double numCommutes;
  
  gasGallons = gasDollars / DOLLARS_PER_GALLON;
  gasMiles = gasGallons * MILES_PER_GALLON;
  
  // TODO! Finish this calculation
  numCommutes = gasMiles; // not quite right...
  return numCommutes; // not quite right...
}

// TODO! A function to convert commute minutes into gas cost
// double toDollars(....) {
// }

int main() {
  // Convert a variety of commonly-known temperatures into Celsius
  cout << "$20 will buy you: " << toCommutes(20) << " commutes." << endl;
  cout << "$100.50 will buy you: " << toCommutes(100.50) << " commutes." << endl;
  cout << "$500 will buy you: " << toCommutes(500) << " commutes." << endl;
  cout << "$8000 will buy you: " << toCommutes(8000) << " commutes." << endl;

  // Prompt user for a number of commutes to convert to cost
  cout << "Enter the number of commutes you'd like to do:" << endl;
  cin >> myCommutes;
  myCost = toDollars(myCommutes);
  cout << "Great idea! Let's drive! ";
  cout << myCommutes << " commutes will cost you $" << myCost << endl;
  
  cout << "All done!" << endl;
}
