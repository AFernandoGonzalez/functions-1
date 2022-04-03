#include <iostream>

using namespace std;

bool isValid(int a) {
    if (a > 1000)
    return true;
  else
    return false;

  }
  return true;
}

int main() {
  int a;

  cin >> a;
  cout << isValid(a);

  return 0;
}
