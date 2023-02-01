#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int q = 0;
    for (int i = 2; i <= n; i++) {
        bool is_prime = true;
        for (int j : a) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            a.push_back(i);
        }
    }
    for (int i = 0; i < a.size() - 1; i++) {
        if (binary_search(a.begin(), a.end(), a[i] + a[i + 1] + 1)) {
            q++;
        }
    }
    cout << (q >= k ? "YES" : "NO") << endl;
    return 0;
}
