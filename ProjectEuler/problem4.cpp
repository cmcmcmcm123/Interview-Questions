/**A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit
numbers is 9009 = 91 × 99. Find the largest palindrome made from the product of two 3-digit numbers.**/
#include <iostream>

using namespace std;

int palindrome(int product) {
    int lastNum; int palindrome = 0;
    while(product != 0) {
        lastNum = product % 10;
        palindrome = palindrome * 10 + lastNum;
        product /= 10;
    }
    return palindrome;
}

int main() {
    int product, largest = 0;
    for(int x = 100, y = 100; x <= 999, y <= 999; x++) {
        product = x * y;
        int pal = palindrome(product);
        if(product == pal) {
            cout << "Palindrome: " << product << endl;
            cout << x << " * " << y << endl;
            if(pal > largest)
                largest = pal;
        }
        if(x == 999){
            x = 100;
            y++;
        }
    }
    cout << "The largest is " << largest << endl;
}
