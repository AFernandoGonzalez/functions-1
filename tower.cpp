#include <iostream>
using namespace std;

void move_a_ring(int src, int dest) { 
  cout << "Move from " << src << " to " << dest << endl; 
}

void move_rings(int n, int src, int dest, int other) {
  if (n == 1) {
    move_a_ring(src, dest);
  } else {
    move_rings(n - 1, src, other, dest);
    move_a_ring(src, dest);
    move_rings(n - 1, other, dest, src);
  }
}


int main() {
  int n = 3;              // Stack is 3 rings high
  move_rings(n, 1, 3, 2); // Move stack 1 to stack 3
  return 0;
}
