#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n == 1) {
      cout << 1 << "\n";
      continue;
    } else if (n == 2) {
      cout << -1 << "\n";
      continue;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += a[i];
      b[i] = sum;
    }
    bool print = false;
    for (int i = 0; i < n; i++) {
      if (b[i] - a[i] == sum - b[i]) {
        print = true;
        cout << (i + 1) << "\n";
        break;
      }
    }

    if (!print) {
      cout << -1 << "\n";
    }
  }
  return 0;
}
