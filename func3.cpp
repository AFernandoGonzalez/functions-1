#include <iostream>
#include <cmath>

using namespace std;


double avg(double x, double y){
  double result = (x + y)/2;
  return result;
}

int main(){
  int a = 1, b = 10;
  int r = 2, t = 10;

  int n = avg(a,b);
  double m = avg(1,3.3);
  double p = a + b + avg(r,t) + 100.45 * 3 + sqrt(p);
  
  cout << "n: " << n << endl;
  cout << "m: " << m << endl;
  cout << "p: " << p << endl;

  return 0;
  
}