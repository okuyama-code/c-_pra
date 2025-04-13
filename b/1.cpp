// https://atcoder.jp/contests/abc401/tasks/abc401_b

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool logged_in = false;

  int unauthorized = 0;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "login") {
      logged_in = true;
    }

    if (s == "logout") {
      logged_in = false;
    }

    if (s == "private" && !logged_in) {
      unauthorized++;
    }
  }

  cout << unauthorized << endl;

  return 0;
}