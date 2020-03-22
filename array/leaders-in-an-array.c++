#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector < int > v;
    vector < int > r;
    int max = 0;
    int temp;
    for (int i = 0; i < n; i++) {
      cin >> temp;
      v.push_back(temp);
    }
    for (int i = v.size() - 1; i >= 0; i--) {
      if (v[i] >= max) {
        max = v[i];
        r.push_back(v[i]);
      }
    }
    for (int i = r.size() - 1; i >= 0; i--) {
      cout << r[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
