#include <iostream>
using namespace std;
void increment(int x) {
 x++; // Modifies the copy, not the original x
}
int main() {
 int num = 5;
 increment(num); // Passes a copy of num
 cout << num; // Still prints 5 (not modified)
}
