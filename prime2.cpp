#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n){
  for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}


int main(){
  int n = 0;

  while(true){
    cout << "Enter a number (0 = exit) and press Enter: ";
    cin >> n;

    if(n == 0){
      break;
    }
    if (prime(n)){
      cout << n << " is a prime" << endl;
    }
    else {
      cout << n << " is not prime" << endl;
    }
  }

  return 0;
}