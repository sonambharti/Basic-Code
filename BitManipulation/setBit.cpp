/*set bit means set 1 at a given position*/

#include <iostream>
using namespace std;

int setBit(int n, int pos){
    return (n | (1<<pos));
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
