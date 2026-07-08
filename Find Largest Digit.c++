#include <iostream>
using namespace std;

int main() {

    int n, maxDigit = 0;

    cin >> n;

    while(n > 0) {
        if(n % 10 > maxDigit)
            maxDigit = n % 10;

        n /= 10;
    }

    cout << maxDigit;

    return 0;
}
