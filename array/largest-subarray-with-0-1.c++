#include <bits/stdc++.h>

using namespace std;

int maxLen(int arr[], int n);

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << maxLen(a, n) << endl;
  }
  return 0;
}

int maxLen(int arr[], int n) {
  int maxLength = 0;
  map < int, int > m;
  int temp = 0;
  for (int i = 0; i < n; i++) {
    temp += arr[i] == 0 ? -1 : arr[i];
    if (temp == 0) {
      maxLength = i + 1;
    }
    if (m.count(temp)) {
      int diff = i - m[temp];
      maxLength = maxLength < diff ? diff : maxLength;
    } else {
      m[temp] = i;
    }
  }
  return maxLength;
}
