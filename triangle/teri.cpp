#include <iostream>
#include <cmath>

int main (){
  int a = 0,b = 0,c = 0;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  if ((a + b) < c || (c+b) < a || (c+a) < b) {
    std::cout << "UNDEFINED";
  } else {
    if((a*a) + (b*b) == (c*c)) {
      std::cout << "YES";
    } else if ((c*c) + (b*b) == (a*a)) {
      std::cout << "YES";
    } else if ((a*a) + (c*c) == (b*b)) {
      std::cout << "YES";
    } else {
      std::cout << "NO";
    }
  }
}