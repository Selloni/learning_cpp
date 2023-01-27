#include <iostream>
#include <regex>

void MakeTrain() {
  std::string str;
  using types = int;
  types wagon;
  size_t k;
  std::deque<types> train;
  while (std::cin >> str) {
    if(str == "+left") {
      std::cin >> wagon;
      train.push_front(wagon);
    } else if (str == "+right") {
      std::cin >> wagon;
      train.push_back(wagon);
    } else if (str == "-left") {
      std::cin >> k;
      k = std::min(k, train.size());
      train.erase(train.end(), train.end() + k);
    } else if (str == "-right") {
      std::cin >> k;
      k = std::min(k, train.size());
      train.erase(train.end() - k, train.end());
    }
  }
  for(const auto& num:train) {
    std::cout << num << " ";
  }
  std::cout << "\n";
}



int main () {
  MakeTrain();
}