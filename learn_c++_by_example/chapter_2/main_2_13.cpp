#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>

int main() {
  auto v = std::vector{0, 1, 2, 3, 4, 5};

  auto new_end =
      std::remove_if(v.begin(), v.end(), [](int i) { return i < 3; });

  for (int n : v) {
    std::cout << n << ' ';
  }
  std::cout << '\n';
  for (auto it = v.begin(); it != new_end; ++it) {
    std::cout << *it << ' ';
  }
  std::cout << '\n';
  for (int n : std::views::drop_while(v, [](int i) { return i < 3; })) {
    std::cout << n << ' ';
  }
  std::cout << '\n';
  for (int n : v | std::views::drop_while([](int i) { return i < 3; })) {
    std::cout << n << ' ';
  }
}
