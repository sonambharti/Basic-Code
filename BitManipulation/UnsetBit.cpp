/*Unset bit means set 0 at a given position*/

#include <iostream>
using namespace std;

int UnsetBit(int n, int pos){
  mask = ~(1<<pos);
  return (n & mask);
}
int main(){
  int n, pos;
  cout << "Enter the No.: ";
  cin >> n;
  cout << "Enter the position: ";
  cin >> pos;
  cout << "The required bit at "<<pos<<" th position is: "<<UnsetBit(n,pos);
  return 0;
}
