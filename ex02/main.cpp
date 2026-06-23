#include <iostream>
#include <string>
#include "Array.hpp"

template <typename T>
void printArray(const Array<T>& arr, const std::string& name)
{
    std::cout << name << " (size = " << arr.size() << "): ";
    for (unsigned int i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}

int main()
{
    Array<int> empty;
    std::cout << "empty.size() = " << empty.size() << std::endl;

    Array<int> numbers(5);
    for (unsigned int i = 0; i < numbers.size(); ++i)
        numbers[i] = static_cast<int>(i + 1);
    printArray(numbers, "numbers");

    Array<int> copy(numbers);
    printArray(copy, "copy");
    printArray(numbers, "numbers");
    copy[0] = 42;
    printArray(copy, "copy after change");

    Array<int> assigned;
    assigned = numbers;
    printArray(assigned, "assigned");
    printArray(numbers, "numbers");
    assigned[1] = 99;
    printArray(assigned, "assigned after change");

    Array<std::string> words(3);
    words[0] = "cpp";
    words[1] = "07";
    words[2] = "Array";
    printArray(words, "words");

    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
