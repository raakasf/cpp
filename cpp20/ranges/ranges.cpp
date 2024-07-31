#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Using std::ranges::view and pipe operator to filter and sort
    auto filtered_sorted = v 
                         | std::views::filter([](int n) { return n > 2; })
                         | std::views::transform([](int n) { return n * 2; });
                         
    std::vector<int> result(filtered_sorted.begin(), filtered_sorted.end());
    std::ranges::sort(result);

    for (const auto& num : result) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    return 0;
}
