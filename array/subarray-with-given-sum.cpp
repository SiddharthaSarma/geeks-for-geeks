#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    int n, s;
    cin >> n;
    cin >> s;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int tempSum = 0;
    int index = 0;
    int result = false;
    for (int i = 0; i < n; i++) {
      tempSum += a[i];
      while (tempSum > s) {
        tempSum -= a[index];
        index++;
      }
      if (tempSum == s) {
        cout << (index + 1) << " " << (i + 1) << "\n";
        result = true;
        break;
      }
    }
    if (!result) {
      cout << "-1" << "\n";
    }
  }

  return 0;
}
