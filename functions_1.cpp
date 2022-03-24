#include <iostream>

using namespace std;

//
void greet(string name){
  cout << "Hello " << name << endl;
}

//second function
double diffOfSquares(double a, double b){
  double result = (a*b) - (b*b);
  return result;
}

int main() {
  //first function
  string name1, name2;
  cout << "Please enter your name: ";
  cin >> name1 ;
  cout << "Please enter your fiends name: ";
  cin >> name2;
  greet(name1);
  greet(name2);

  //second func
  double x, y , z;
  cout << "Enter a number x: ";
  cin >> x;
  cout << "Enter a number y: ";
  cin >> y;
  z = diffOfSquares(x, y);
  cout << z << endl;

  
  return 0; 
} 
