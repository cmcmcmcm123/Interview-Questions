/**The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  long long int num, largest = 0;
  cout << "Enter an integer: ";
  cin >> num;
  if(num == 1)
    cout << "It has no prime factors and is neither prime nor composite!\n";
  for(long int i = 2; i < 100000; i++) {
    while(num % i == 0) {
      num /= i;
      largest = i;
    }
  }
  cout << "The largest prime factor is " << largest << endl;
}
