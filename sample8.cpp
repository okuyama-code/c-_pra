#include <iostream>
#include <vector>
using namespace std;

// v: イテレート（反復処理）するコンテナ（この場合はベクター） | element: 各イテレーションで取得される要素を参照する変数名 | const auto&: 要素の型の宣言部分
// const: この修飾子は element が変更できないこと（読み取り専用）を示します | auto: コンパイラに型を自動的に推論させます | &: element が v の実際の要素への参照（reference）であることを示します | : 「〜の中の各要素」という意味を表します
void printVector(const vector<int>& v, const string& name) {
  cout << name << " = { ";
  for(const auto& element : v) {
    cout << element << " ";
  }
  cout << "}" << endl;
  // 例1 => 初期状態 = { 1 2 3 }
}

// ベクターの操作
int main() {
  vector<int> vec = {1, 2, 3};
  printVector(vec, "初期状態");

  // 末尾に要素を追加
  vec.push_back(4);
  vec.push_back(5);
  printVector(vec, "push_back後");

  // 要素の挿入
  // (vec.begin() + 2) - インデックス2番目の要素を指すイテレータを得られます
  vec.insert(vec.begin() + 2, 10); // インデックス2の位置（つまり3番目の要素の位置）に値10を挿入する
  printVector(vec, "insert後"); // insert後 = { 1 2 10 3 4 5 }

  // 複数要素の挿入
  vec.insert(vec.begin() + 4, 3, 99); // インデックス4の位置（つまり5番目の要素の位置）に値99を3つ挿入する
  printVector(vec, "複数insert後"); // 複数insert後 = { 1 2 10 3 99 99 99 4 5 }

  // 別のベクターからの挿入
  vector<int> another = {100, 200, 300};
  vec.insert(vec.begin() + 1, another.begin(), another.end());
  printVector(vec, "別ベクターからのinsert後"); // 別ベクターからのinsert後 = { 1 100 200 300 2 10 3 99 99 99 4 5 }

  // 末尾の要素の削除
  vec.pop_back();
  printVector(vec, "pop_back後"); // pop_back後 = { 1 100 200 300 2 10 3 99 99 99 4 }

   // 特定位置の要素を削除
  vec.erase(vec.begin() + 3);  // index 3の要素を削除 300が削除される
  printVector(vec, "erase後"); // erase後 = { 1 100 200 2 10 3 99 99 99 4 }

  // サイズの変更
  vec.resize(11);  // サイズを11に拡大（新しい要素は0で初期化）
  printVector(vec, "resize(10)後"); // { 1 100 200 2 10 3 99 99 99 4 0 }

  vec.resize(5);  // サイズを5に縮小（末尾の要素が削除される）
  printVector(vec, "resize(5)後"); // resize(5)後 = { 1 100 200 2 10 }

  vec.resize(8, 7);  // サイズを8に拡大（新しい要素は7で初期化）
  printVector(vec, "resize(8,7)後"); // resize(8,7)後 = { 1 100 200 2 10 7 7 7 }

  // ベクターのクリア
  vec.clear();  // すべての要素を削除
  printVector(vec, "clear後"); // clear後 = { }

  return 0;
}