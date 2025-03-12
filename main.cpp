#include <iostream>
using namespace std;

double myTempF;
double myTempC;

// Converts degrees Fahrenheit to Celsius
double toCelsius(double fahr) {
  // TODO! Make this code correct
  double cels;
  cels = fahr + 32; // not quite right...
  return cels; // not quite right...
}

// TODO! A function to convert degrees Fahrenheit to Kelvin

int main() {
  // Convert a variety of commonly-known temperatures into Celsius
  cout << toCelsius(90) << "° C is hot! Time to go to the pool." << endl;
  cout << toCelsius(60) << "° C is jacket weather." << endl;
  cout << toCelsius(33) << "° C is just barely above freezing." << endl;
  cout << toCelsius(24) << "° C is below freezing!" << endl;
  cout << toCelsius(451) << "° C: The temperature at which paper books will spontaneously combust." << endl;

  // Prompt user for one last temperature to convert into Celsius
  cout << "Enter your own temperature in ° F:" << endl;
  cin >> myTempF;
  myTempC = toCelsius(myTempF);
  cout << "Excellent choice! ";
  cout << myTempF << "° F is " << myTempC << "° C." << endl;
  
  cout << "All done!" << endl;
}
