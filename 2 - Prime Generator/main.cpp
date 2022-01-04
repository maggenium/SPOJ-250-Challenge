#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main() {
    int t, m, n;
    f >> t;
    for (int i = 1; i <= t; i++) {
        f >> m >> n;

        // int starterK = 2;
        for (int j = m; j <= n; j++) {
            if (j == 1) {
                continue;
            }

            bool isPrime = (j == 2) || (j%2 != 0);
            for (int k = 2; isPrime && k*k <= j; k++) {
                if (j % k == 0) {
                    // not a prime number
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                // starterK = j;
                g << j << endl;
            }
        }
        g << endl;
    }
    return 0;
}
