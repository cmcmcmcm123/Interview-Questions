/**2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {//
    int exit = 0;
    for(long long int num = 1; num <= 1000000000 ; num++) {
        int counter = 0;
        for(int i = 1; i <= 20; i++) {
            while(num % i == 0) {
                counter++;
                break;
            }
            if(counter == 20) {
                cout << num << endl;
                exit++;
            }
        }
        if(exit == 1)
            break;
    }
}
