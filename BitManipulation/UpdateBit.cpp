/*Update bit means set 1 at a given position*/

#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value){
  mask = ~(1<<pos);
  n = n & mask;    
  return (n | (value<<pos));
}
int main(){
  int n, pos;
  cout << "Enter the No.: ";
  cin >> n;
  cout << "Enter the position: ";
  cin >> pos;
  cout << "The required bit at "<<pos<<" th position is: "<<setBit(n,pos);
  return 0;
}
