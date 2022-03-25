#include <cmath>
#include <iostream>

using namespace std;

int gcf(int a, int b){
  if (b == 0){
    return a;
  }
  else {
    cout << "Else: " << b << " " << a%b << endl;
    return gcf(b, a%b);
  }
}


int main(){

  int a = 0, b = 0;

  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "GCF = " << gcf(a,b) << endl;
  
  return 0;
}