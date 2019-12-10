
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkFastened(vector<int>& buttons) {
  if(buttons.size() == 1)
    if(buttons[0] == 1)
      return true;
    else 
      return false;
 int c = count(buttons.begin(), buttons.end(), 0);
  if(c > 1 || c == 0)
    return false;
  return true;
}
int main()
{
  int n;
  cin >> n;
  vector<int> buttons(n, 0);
  for(int i = 0; i < n; i++) {
    cin >>  buttons[i];
  }
  if(checkFastened(buttons) == true)
    cout << "YES";
  else 
    cout << "NO";
return 0;
}

