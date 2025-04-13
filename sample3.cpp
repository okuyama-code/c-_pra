#include <iostream>

// ループ

int main() {
  // for ループ
  std::cout << "For Loop:" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << i << " ";
  }
  std::cout << std::endl; // => 0 1 2 3 4

  // while ループ
  std::cout << "While Loop:" << std::endl;
  int j = 0;
  while (j < 9) {
    std::cout << j << " ";
    j ++;
  }
  std::cout << std::endl; // => 0 1 2 3 4 5 6 7 8

  // do-while ループ
  std::cout << "Do-while Loop:" << std::endl;
  int k = 0;
  do {
    std:: cout << k << " ";
    k++;
  } while (k < 6);
  std::cout << std::endl; // => 0 1 2 3 4 5

  return 0;
}