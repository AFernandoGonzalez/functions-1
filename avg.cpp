#include <iostream>

using namespace std;

double avg(double a, double b){
  return (a+b)/2;
}

int main(){
  double x = 1.0, y = 2.0;

  cout << "Enter your first number: ";
  cin >> x;
  cout << "Enter your second number: ";
  cin >> y ;

  // call the function
  cout << "Average is: " << avg(x, y) << endl;

  return 0;
}