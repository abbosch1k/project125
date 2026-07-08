#include <iostream>
using namespace std;

int main() {

    int n, minDigit = 9;

    cin >> n;

    while(n > 0) {
        if(n % 10 < minDigit)
            minDigit = n % 10;

        n /= 10;
    }

    cout << minDigit;

    return 0;
}
