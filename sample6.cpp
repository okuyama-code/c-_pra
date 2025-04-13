#include <iostream>
using namespace std;

// ポインタ

void incrementByValue(int num);
void incrementByReference(int& num);

int main() {
  // 変数の宣言
  int number = 42;

  // ポインタの宣言と初期化
  int* ptr = &number; // numberのアドレスをptrに格納

  // 値とアドレスの表示
  cout << "Value of number: " << number << endl;    // Value of number: 42
  cout << "Address of number: " << &number << endl; // Address of number: 0x16baceca8  // &number は number 変数のメモリアドレス
  cout << "Value of ptr: " << ptr << endl;          // Value of ptr0x16f0beca8  // ptr は number のメモリアドレスを格納しているポインタ
  cout << "Value ptr points to: " << *ptr << endl;  // (デリファレンス) Value ptr points to: 42  // デリファレンス（dereference）とは、ポインタが指しているメモリアドレスの値を取得する操作です。C++では「*」（アスタリスク）演算子を使って行います。

  // ポインタを使った値の変更
  *ptr = 100;
  cout << "New value of number: " << number << endl; // New value of number: 100

  // 動的メモリ割り当て
  int* dynaamic_array = new int[5]; // 5つのint型のメモリ確保

  cout << dynaamic_array << endl;   // 0x131804080

  // 値の設定
  for (int i = 0; i < 5; i++) {
    dynaamic_array[i] = i * 50;
  }

  // 値の表示
  for (int i = 0; i < 5; i++) {
    cout << "dynamic_array[" << i << "] = " << dynaamic_array[i] << endl;
  }

  cout << *dynaamic_array << endl;         // 0 配列の先頭要素（0番目の要素）の値
  cout << dynaamic_array[1] << endl;       // 50 配列の先頭要素（1番目の要素）の値
  cout <<  *(dynaamic_array + 2) << endl;  // 100 そのアドレスにある値（2番目の要素の値）を取得します

  // 各要素のアドレスを表示
  for (int i = 0; i < 5; i++) {
    cout << "&arr[" << i << "] = " << &dynaamic_array[i] << endl;
  }
  // 配列の各要素にはそれぞれ固有のアドレスがあります。これらのアドレスは連続しており、要素のサイズだけずれています：
  // &arr[0] = 0x12fe05d80
  // &arr[1] = 0x12fe05d84  // int型は通常4バイトなのでアドレスが4増加
  // &arr[2] = 0x12fe05d88
  // &arr[3] = 0x12fe05d8c
  // &arr[4] = 0x12fe05d90


  // ----------------------------------------------------------------------------------

  int x = 10;
  int y = 20;

  cout << "Before increment - x: " << x << ", y: " << y << endl; // => Before increment - x: 10, y: 20

  incrementByValue(x);      // 値渡し
  incrementByReference(y);  // 参照渡し

  cout << "After increment - x: " << x << ", y: " << y << endl; // => After increment - x: 10, y: 21

  // 参照の宣言
  // 参照演算子 & について
  // int& という型宣言の中の & は、「参照型」を作成することを意味します。
  int& ref = x;  // xへの参照
  ref = 100;     // ref に対する操作は全て実際には x に対して行われます。 ref と x は同じメモリ位置を指します

  cout << "After reference modification - x: " << x << endl; // => After reference modification - x: 100

  return 0;
}

// 値渡しの関数
void incrementByValue(int num) {
  num++;

  // 値渡しでは：
  // 1. 引数のコピーが関数内で作成されます
  // 2. 関数内での変更は、呼び出し元の変数に影響を与えません
  // 3. 元の変数とは別のメモリ領域を使用します
  // 4. 大きなデータ構造の場合はコピーのコストが高くなります
  // 今回のコード例では、incrementByValue(x)を呼び出しても、xの値は変わらず10のままです。関数内ではnumというコピーが作られて、そのコピーの値だけが増加します。
}

// 参照を使用した関数
// C++における int& の & は「参照演算子」と呼ばれるものです。
void incrementByReference(int& num) {
  num++;

  // 参照渡しでは：
  // 1. 引数の**エイリアス（別名）**が作成されます
  // 2. 関数内での変更は、呼び出し元の変数に直接影響します
  // 3. 追加のメモリを使わず、元の変数と同じメモリ領域を参照します
  // 4. 大きなデータ構造を効率的に扱えます
  // 今回のコード例では、incrementByReference(y)を呼び出すと、yの値が20から21に変わります。関数内のnumはyの参照（別名）なので、numを変更すると実際にはyを変更していることになります。
}