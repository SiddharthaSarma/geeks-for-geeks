#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int iN;
    cin >> iN;
    int sum = (iN * (iN + 1)) / 2;
    int tempSum = 0;
    int tempNum = 0;
    for (int j = 0; j < iN - 1; j++) {
      cin >> tempNum;
      tempSum += tempNum;
    }
    cout << (sum - tempSum) << endl;
  }
  return 0;
}
