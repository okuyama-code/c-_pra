// ベクトルの内容を表示する関数を記載している。こちらをコピペして使う。

#include <iostream>
#include <vector>
using namespace std;

// ベクトルの内容を表示する関数
void printVector(const vector<int>& vec) {
  if (vec.empty()) {
    cout << "[]" << endl;
    return;
  }

  cout << "[";
  for (size_t i = 0; i < vec.size(); i++) {
    cout << vec[i];
    if (i < vec.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;
}

int main() {
    // 例 1 入力
    // vector<int> a(3);
    // cin >> a[0] >> a[1] >> a[2];

    // 例 2 ベクターを定義
    vector<int> a = {1, 5, 9, 10};

    printVector(a);

    return 0;
}