#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class CantFindException : public std::exception
{
    public:
        const char * what() const throw()
        {
            return ("Exception: Can not find!");
        }
};

template <typename T>
void easyfind(T type, int i)
{

}

#endif