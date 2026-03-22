#include <iostream>
using namespace std;

int main() {
    long n;
    if (!(cin >> n)) return 0;
    
    for (long long i = 1; i <= n; i++) {
        long long k = i * i;
        long long ans = k * (k - 1) / 2 - 4 * (i - 1) * (i - 2);
        cout << ans << endl;
    }
    return 0;
}
