#include <iostream>

// ジャンプ：プログラムの実行位置を移動する
// - break：ループや switch 文から抜け出す
// - continue：ループの残りの処理をスキップして次の繰り返しへ
// - return：関数から値を返して終了する

// 条件分岐
int main() {
  int score = 85;

  // if-else文
  if (score >= 90) {
      std::cout << "Grade: A" << std::endl;
  } else if (score >= 80) {
      std::cout << "Grade: B" << std::endl;
  } else if (score >= 70) {
      std::cout << "Grade: C" << std::endl;
  } else {
      std::cout << "Grade: D" << std::endl;
  }

  // switch分
  // break の役割： case で条件に一致した部分を実行した後、switch 文全体から抜け出します。 もし break がないと、その下にある全ての case の処理も続けて実行されてしまいます（これを「フォールスルー」と呼びます）
  int day = 3;
  switch (day) {
    case 1:
      std::cout << "monday" << std::endl;
      break;
  }

  return 0;
}