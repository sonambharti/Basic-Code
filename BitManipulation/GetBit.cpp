/*Find the bit of a given no at given position.*/
#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}
int main(){
    int n, pos;
    cout << "Enter the No.: ";
    cin >> n;
    cout << "Enter the position: ";
    cin >> pos;
    cout << "The required bit at "<<pos<<" th position is: "<<getBit(n,pos);
}
