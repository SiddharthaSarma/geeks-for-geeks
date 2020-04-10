#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int sum = a[0];
    int bestsum = a[0];
    for (int i = 1; i < n; i++) {
      // kadanes algo
      sum = max(a[i], sum + a[i]);
      bestsum = max(bestsum, sum);
      // cout << i << "--" << a[i] << "--" << sum << "--" << bestsum << "\n";
    } 
    cout << bestsum << endl;
  }
  return 0;
}
