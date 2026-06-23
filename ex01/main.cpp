#include "iter.hpp"

template <typename T>
void printValue(T &value)
{
	std::cout << value << std::endl;
}

template <typename T>
void printConstValue(const T &value)
{
	std::cout << value << std::endl;
}

int main()
{
	int ints[] = {1, 2, 3, 4};
	std::string strings[] = {"cpp", "07", "iter"};

	iter(ints, 4, printValue<int>);
	iter(strings, 3, printConstValue<std::string>);

	return 0;
}
