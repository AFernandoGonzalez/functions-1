#include <iostream>

using namespace std;


// declare
int fact_num(int a){
  int factorial = 1;

  for(int i = 1; i <= a ; i++){
    factorial*=i;
  }

  return factorial;
}


// define
int main(){

  int x;

  cout << "Enter a number: ";
  cin >> x;

  cout << "Factorial of " << x << ": " << fact_num(x)<< endl;

  return 0;
}




// call the func
