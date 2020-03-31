#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int l = 0;
    int m = 0;
    int h = n - 1;
    while (m <= h) {
      if (a[m] == 0) {
        swap(a[m], a[l]);
        m++;
        l++;
        continue;
      }

      if (a[m] == 1) {
        m++;
        continue;
      }

      if (a[m] == 2) {
        swap(a[m], a[h]);
        h--;
        continue;
      }
    }
    for (int i: a) {
      cout << i << " ";
    }
    cout << "\n";
  }
  return 0;
}
