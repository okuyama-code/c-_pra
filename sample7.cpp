#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ベクターの基礎と操作
int main() {
  // ベクターの宣言と初期化
  vector<int> vec1;        // 空のベクター
  vector<int> vec2(5);     // 5つの要素(すべて0)を持つベクター
  vector<int> vec3(5, 10);  // 5つの要素（すべて10）を持つベクター
  vector<int> vec4 = {1, 2, 3, 4, 5}; // 初期値を指定したベクター

  // ベクターのサイズを取得
  cout << "vec1のサイズ: " << vec1.size() << endl;       // 0
  cout << "vec2のサイズ: " << vec2.size() << endl;       // 5
  cout << "vec3のサイズ: " << vec3.size() << endl;       // 5
  cout << "vec4のサイズ: " << vec4.size() << endl;       // 5

  // ベクターが空かどうか確認
  cout << "vec1は空か: " << (vec1.empty() ? "はい" : "いいえ") << endl;  // はい
  cout << "vec4は空か: " << (vec4.empty() ? "はい" : "いいえ") << endl;  // いいえ

  // ------------------------------------------------------------------

  vector<int> numbers = {10, 20, 30, 40, 50};
  cout << numbers[2] << endl; // 30

  // 最初と最後の要素にアクセス
  cout << numbers.front() << endl;  // 10
  cout << numbers.back() << endl;   // 50

  // 要素の変更
  numbers[1] = 25;
  numbers.at(3) = 45;

  // ベクターの内容を表示
  for(int num : numbers) {
    cout << num << " ";
  }
  cout << endl;  // 10 25 30 45 50

  return 0;
}