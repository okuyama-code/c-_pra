#include <iostream>
#include <string>

// 変数と基本データ型

// - char: C++の基本データ型（プリミティブ型）で、1文字だけを格納できます
// - std::string: C++の標準ライブラリに含まれるクラス（複合型）で、複数の文字からなる文字列を扱います


// - float: 約7桁の精度（単精度）  数値の後に f または F をつける（例: 19.99f）
// - double: 約15-16桁の精度（倍精度） サフィックスなし、または d または D をつける（例: 3.14 または 3.14d）

int main() {
  // 整数型
  int age = 25;

  // 浮動小数点型
  float price = 19.99f;
  double precise_value = 3.141592653589793;

  // 文字型 (1文字のみ)
  char grade = 'A';

  // 真偽値型
  bool is_active = true;

  // 文字列（C++のstring型）
  std::string name = "C++ Learner";

  std::cout << "Age: " << age << std::endl;
  std::cout << "Price: " << price << std::endl;
  std::cout << "Grade: " << grade << std::endl;
  std::cout << "Active: " << is_active << std::endl;
  std::cout << "Name: " << name << std::endl;

  return 0;
}