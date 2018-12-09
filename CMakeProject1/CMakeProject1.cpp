#include <iostream>
#include <fmt/format.h>

int main() {
	std::cout << fmt::format("foo {} bar", "baz");
	std::cin.get();
	return 0;
}
