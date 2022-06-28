/*Update bit means set 1 at a given position*/

#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value){
  mask = ~(1<<pos);
  n = n & mask;    
  return (n | (value<<pos));
}
int main(){
  int n, pos, value;
  cout << "Enter the No.: ";
  cin >> n;
  cout << "Enter the position: ";
  cin >> pos;
  cout << "Enter the value to update: ";
  cin >> value;
  cout << "The required bit to "<<value<<"at "<<pos<<" th position is: "<<updateBit(n,pos,value);
  return 0;
}
