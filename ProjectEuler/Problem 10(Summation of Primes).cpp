/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/
#include <iostream>

using namespace std;

int main() {
	const long long int MAX = 3000000;
	bool PrimeArray[MAX];
	unsigned long long int sum = 0;

	for(int i = 0; i < MAX; i++)
		PrimeArray[i] = true;


	for(int i = 2; i < MAX; ) {
        if(i > 2000000)
			break;
		sum += i;
		for(int j = 2; (i * j) <= MAX; j++)
			PrimeArray[i*j] = false;

		for(int k = i + 1; k <= MAX; k++) {
			if(PrimeArray[k]) {
				i = k;
				break;
			}
		}
	}
	cout << sum << endl;
}

