#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long getMask(long long a, long long k) {
    long long tmp = a, res = 0, cnt = 0;
    while (tmp > 0) {
        if (tmp % k > 1)
            return -1;
        res |= (tmp % k) << cnt;
        tmp /= k;
        cnt++;
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (long long &x : a) cin >> x;

        vector<long long> masks;
        bool valid = true;

        for (long long x : a) {
            long long mask = getMask(x, k);
            if (mask == -1) {
                valid = false;
                break;
            }
            masks.push_back(mask);
        }

        if (!valid) {
            cout << "NO\n";
            continue;
        }

        long long combined = 0;
        for (long long mask : masks) {
            if ((combined & mask) > 0) {
                valid = false;
                break;
            }
            combined |= mask;
        }

        cout << (valid ? "YES" : "NO") << "\n";
    }

    return 0;
}