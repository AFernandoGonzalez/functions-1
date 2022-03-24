//small piece of code thats used to carry out a simple task called when needed.

#include <iostream>

using namespace std;

string fullName(string a, string b) {
  string result = a + " " + b;
  return result ;
}

void greet(string a){
  cout << "Hello " << a << endl;
} 

int main(){

  string fName, lName;

  cout << "Please enter your first name: ";
  cin >> fName;
  cout << "Please enter you last name: ";
  cin >> lName;

  string fn = fullName(fName, lName);

  greet(fn);

  return 0;
}
