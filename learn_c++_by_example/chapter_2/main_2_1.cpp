#include <iostream>
#include <vector>

void generate_triangle() {
  std::vector data{1};  // CTAD, UIS
  for (auto number : data) {
    std::cout << number << ' ';
  }
  std::cout << std::endl;
}

int main() { generate_triangle(); }
