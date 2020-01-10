/**By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void printPrime(int &primeCount);

int main() {
  int primeCount = 0;
  cout << "Here's the list of the 10001st prime number:\n";
  printPrime(primeCount);
}
//Execution time: 244.867s
void printPrime(int &primeCount) {
  int num = 2;
  while(primeCount <= 10001) {
    int counter = 0;
    for(int j = 1; j <= num; j++) {
      if(num % j == 0)
        counter++;
    }
    if(counter == 2) {
      ++primeCount;
      if(primeCount == 10001)
        cout << num << endl;
    }
    num++;
  }
}
