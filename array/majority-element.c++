#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int size;
    cin >> size;
    vector < int > v;
    int temp;
    for (int i = 0; i < size; i++) {
      cin >> temp;
      v.push_back(temp);
    }
    int res = 0;
    int count = 1;
    for (int i = 1; i < v.size(); i++) {
      if (v[res] == v[i]) {
        count++;
      } else {
        count--;
      }
      if (count == 0) {
        res = i;
        count = 1;
      }
    }
    count = 0;
    for (int i = 0; i < v.size(); i++) {
      if (v[res] == v[i]) {
        count++;
      }
    }
    if (count > v.size() / 2) {
      cout << v[res] << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
