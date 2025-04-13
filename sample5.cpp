#include <iostream>
using namespace std;

// 配列
int main() {
  // 配列の宣言と初期化
  int numbers[5] = {10, 20, 30, 40, 50};

  // 個別の要素にアクセス
  cout << "Third element: " << numbers[2] << endl;  // 0から始まるので2番目は30

  // 配列の全要素の出力
  for (int i = 0; i < 5; i++) {
    cout << numbers[i]  << endl;
  }

  // 多次元配列
  int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

   // 多次元配列の全要素を出力
  cout << "Matrix elements:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}