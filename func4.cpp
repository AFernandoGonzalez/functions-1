#include <iostream>

using namespace std;

//  call by value
int sum(int a, int b){
  int total = a+b;
  return total;
}

//  call by value
void add(int a, int b){
  cout << "Add: " << a+b << endl;
}

/*---------------------*/

// call by reference
int sub(int &n, int &m){
  int total = n-m;
  return total;
}

// call by reference
void flip(int &n, int &m){
  int temp = n;
  n = m;
  m = temp;
}


int main(){

  int x, y;

  cout << "Enter your first number: ";
  cin >> x;
  cout << "Enter your second number: ";
  cin >> y;
  /*---------------------*/
  cout << "x: "<< x << " y: " << y << endl;
  cout << "Sub: " << sub(x,y) << endl;
  
/*---------------------*/
  flip(x,y);
  cout << "Flip: " << "x: "<< x << " y: " << y << endl;
  
  /*---------------------*/
  cout << "Sum: " << sum(5,5) << endl;
  add(1,1);
  /*---------------------*/

  return 0;
}

