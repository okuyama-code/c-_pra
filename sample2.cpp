#include <iostream>

// 演算子

int main() {
  int a = 10, b = 3;

   // 算術演算子
    std::cout << "a + b = " << a + b << std::endl;  // 加算
    std::cout << "a - b = " << a - b << std::endl;  // 減算
    std::cout << "a * b = " << a * b << std::endl;  // 乗算
    std::cout << "a / b = " << a / b << std::endl;  // 整数除算（結果：3）
    std::cout << "a % b = " << a % b << std::endl;  // 剰余（余り）

    // C++では論理演算の結果として 1（真）と 0（偽）が返ってくる
    // boolalphaを使うと、true/falseとして表示される
    // std::cout << std::boolalpha;

    // 比較演算子
    std::cout << "a == b: " << (a == b) << std::endl;  // => 0 等しい
    std::cout << "a != b: " << (a != b) << std::endl;  // => 1 等しくない
    std::cout << "a > b: " << (a > b) << std::endl;    // => 1 より大きい

    // 論理演算子
    bool x = true, y = false;
    std::cout << "x && y: " << (x && y) << std::endl;  // => 0 AND
    std::cout << "x || y: " << (x || y) << std::endl;  // => 1 OR
    std::cout << "!x: " << (!x) << std::endl;         //  => 0 NOT

  return 0;
}