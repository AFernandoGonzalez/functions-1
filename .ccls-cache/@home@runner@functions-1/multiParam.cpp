#include <iostream>

using namespace std;

int printSomething(int x, int y){
  int answer = x + y ;
  return answer;
}

int main() {
  
  cout << printSomething(15, 607) << endl;
  
  return 0; 
} 
