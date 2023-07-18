#include "easyfind.hpp"
#include <vector>
#include <array>

int main()
{
    // Example usage with vector
    std::array<int, 5> arr = {1, 3, 5, 7, 9};
    std::vector<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);

    try
    {
        easyfind(vec, 2);
    }
    catch (const std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    try
    {
        easyfind(arr, 5);
    }
    catch (const std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    try
    {
        easyfind(vec, 10);
    }
    catch (const std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    return 0;
}