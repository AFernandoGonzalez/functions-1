#include <iostream>

using namespace std;
// first example product of two intergers
int product(int a, int b){
  a = a*b;
  return a;
}

//Second example
void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

int main(){
  // firt example
  int x = 5, y = 6;
  cout << product(x, y) << endl;

  // second example
  int r = 5, c = 3;
  swap(r, c);
  cout << "r="<< r << ";c="<< c << endl;
  return 0;
}