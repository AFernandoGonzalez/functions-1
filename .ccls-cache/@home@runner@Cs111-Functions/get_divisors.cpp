#include <cmath>
#include <iostream>

using namespace std;

void get_divisors(int n) {
  double sqrt_of_n = sqrt(n);
  for (int i = 2; i <= sqrt_of_n; ++i)
    if (n % i == 0) {      // If i divides n evenly,
      cout << i << ", ";   //
      get_divisors(n / i); //
      return;              //
      // Print i, Factor n / i, and exit.
    }
  // If no divisor is found, then n is prime;
  //  Print n and make no further calls.
  cout << n;
}

int main() {
  int n = 0;
  cout << "Enter a number and press ENTER: ";
  get_divisors(n);
  cin >> n;
  cout << endl;
  return 0;
}