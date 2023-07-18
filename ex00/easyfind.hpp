#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define RESET	"\033[0m"
#define BLUE	"\033[1;34m"
#define GREEN   "\x1B[32m"
#define RED		"\033[31m"

#include <iostream>
#include <algorithm>

class CantFindException : public std::exception
{
    public:
        const char * what() const throw()
        {
            return ("Exception: value not found in the container!!");
        }
};

template <typename T>
void easyfind(const T& array, int find)
{
    typename T::const_iterator iter;
    iter = std::find(array.begin(), array.end(), find);
    if (iter == array.end())
    {
        throw CantFindException();
        return ;
    }
        std::cout << GREEN << "Found the first occurrence of " << BLUE << *iter << RESET << std::endl;
}

#endif