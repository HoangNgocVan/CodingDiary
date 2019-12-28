
#include <bits/stdc++.h>
using namespace std;
 int checkHeight(int n, int h) {
   if(n <= h)
    return 1;
  return 2;
 }
int main() {
 int n, h;
 cin >> n >> h;
 vector<int> a(n, 0);
 for(int i = 0; i < a.size(); i++) {
   cin >> a[i];
 }
 int result = 0;
 for(auto i : a) {
   result += checkHeight(i,h);
 }
 cout << result;
  return 0;
}