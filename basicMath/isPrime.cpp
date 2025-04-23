#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a) {
    if (a <= 1) return false;

    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false; // divisible by something other than 1 and itself
        }
    }

    return true; // if no divisor found
}

int main() {
    int a;
    cin >> a;

    if (isPrime(a)) {
        cout << a << " is Prime" << endl;
    } else {
        cout << a << " is Not Prime" << endl;
    }

    return 0;
}
