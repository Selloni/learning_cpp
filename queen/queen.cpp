#include<iostream>
#include<cmath>

int main () {
  int col, row;
  int col_step, row_step;
  std::cin >> col;
  std::cin >> row;
  std::cin >> col_step;
  std::cin >> row_step;
  col = col_step - col;
  row = row_step - row;
  if ((col > 0 && col < 9 && row > 0 && row < 9) || (col_step > 0 && col_step < 9 && row_step > 0 && row_step < 9)) {
    if (std::abs(col) <= 1 && std::abs(row) <= 1) {
      std::cout << "YES";
    } else {
      std::cout << "NO";
    }
  } else {
    std::cout << "NO";
  }
}