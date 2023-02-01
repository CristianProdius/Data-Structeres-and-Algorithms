#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> l(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (l[i] == 0) {
            for (int j = 2 * i; j <= n; j += i) {
                l[j] += 1;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (l[i] == 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
