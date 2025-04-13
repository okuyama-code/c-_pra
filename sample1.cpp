#include <iostream>

// 変数と基本データ型

int main() {
  // 整数型
  int age = 25;

  // 浮動小数点型
  float price = 19.99f;
  double precise_value = 3.141592653589793;

  // 文字型
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