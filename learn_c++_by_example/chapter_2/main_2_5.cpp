#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& s,
                         const std::vector<std::vector<T>>& triangle) {
  for (const auto& row : triangle) {
    std::ranges::copy(row, std::ostream_iterator<T>(s, " "));
    s << '\n';
  }
  return s;
}

std::vector<int> get_next_row(const std::vector<int>& last_row) {
  std::vector next_row{1};

  if (last_row.empty()) {
    return next_row;
  }
  for (size_t idx = 0; idx + +1 < last_row.size(); ++idx) {
    next_row.emplace_back(last_row[idx] + last_row[idx + 1]);
  }
  next_row.emplace_back(1);
  return next_row;
}

auto generate_triangle(int rows) {
  std::vector<std::vector<int>> triangle{{1}};  // Add first row

  for (int row = 1; row < rows; ++row) {
    // No longer copy of data as uses void push_back( T&& value );
    triangle.push_back(get_next_row(triangle.back()));
  }
  return triangle;
}

int main() { std::cout << generate_triangle(5); }
