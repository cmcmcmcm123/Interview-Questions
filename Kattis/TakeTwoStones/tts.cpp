#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if(n >= 1 && n <= 10000000) {
		if(n == 1) cout << "Alice" << endl;
		else if(n % 2 == 0) cout << "Bob" << endl;
		else cout << "Alice" << endl;
	}	
	else cout << "invalid input" << endl;


}