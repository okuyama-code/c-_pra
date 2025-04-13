#include <iostream>
#include <string>

// 関数

// 関数のプロトタイプ宣言
int add(int a, int b);
void greet(std::string name);
double calculateAverage(int arr[], int size);


int main() {
  // 関数の呼び出し
  int sum = add(5, 3);
  std::cout << "Sum: " << sum << std::endl;

  greet("C++ Beginner");

  int scores[] = {85, 90, 78, 92, 88};
  double avg = calculateAverage(scores, 5);
  std::cout << "Average score: " << avg << std::endl; // => Average score: 86.6

  return 0;
}

// 関数の定義
int add(int a, int b) {
  return a + b;
}

void greet(std::string name) {
  std::cout << "Hello, " << name << "!" << std::endl;
}

double calculateAverage(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  // static_cast<double>(sum) はC++の型変換（タイプキャスト
  // 整数型の sum を浮動小数点型の double に変換しています
  return static_cast<double>(sum) / size;
}