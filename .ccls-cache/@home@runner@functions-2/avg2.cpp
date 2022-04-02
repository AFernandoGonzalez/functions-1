#include <iostream>

using namespace std;

double avg(double x, double y){
  double results = (x*y)/2;
  return results;
}

void print_results(double a, double b){
  cout << "Average is: " << avg(a,b) << endl;
}



int main(){
  double a = 0.0, b = 0.0;

  cout << "Enter your first number: ";
  cin >> a;
  cout << "Enter your second number: ";
  cin >> b ;

  // call the function
  print_results(a,b);
  
  return 0;
}