#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, count;
  cin >> n;
  
  while(n) {
      count++;
      n /= 10;
  }
  cout << count;
  return 0;
}
