//Street Parade - http://www.spoj.com/problems/STPAR/  - Just an idea :v
#include <bits/stdc++.h>
using namespace std;
bool checkMobile(vector<int> mobiles) {
  stack<int> street;
  int tmp;
  int k = 1;
  for(int i = 0; i < mobiles.size(); i++) {
    if(mobiles[i] != k) {
      street.push(mobiles[i]);
    } else {
      k++;
    }
  }
  while(k != mobiles.size()) {
    if(street.top() == k) {
        street.pop();
        k++;
      }
    else
      return false;
  }
  return true;
}
int main() {
  int n, nothing;
  cin >> n;
  vector<int> mobiles(n,0);
  for(int i = 0; i < mobiles.size(); i++) {
    cin >>  mobiles[i];
  }
  if(checkMobile(mobiles) == true)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}