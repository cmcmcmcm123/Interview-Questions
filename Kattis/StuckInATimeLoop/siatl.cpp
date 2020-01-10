#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if(n >= 1 && n <= 100) {
		for(int i = 1; i <= n; i++) {
			cout << i << " Abracadabra" << endl;
		}

	}
	else cout << "invalid input";
}