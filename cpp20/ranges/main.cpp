// ranges/main.cpp
#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto even = vec | std::views::filter([](int i) { return i % 2 == 0; });

    std::ranges::for_each(even, [](int i) { std::cout << i << " "; });
    std::cout << std::endl;

    return 0;
}
