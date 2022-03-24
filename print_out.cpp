#include <iostream>

using namespace std;


// declare
void print_out(int a){
  for(int i = 1; i <=a ; i++){
    cout << i << endl;
  }
  
}


int main(){
  int n;

  cout << "Enter a integer: ";
  cin >> n;

  print_out(n);

  return 0;
}