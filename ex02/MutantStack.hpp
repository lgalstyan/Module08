#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define RESET	"\033[0m"
#define BLUE	"\033[1;34m"
#define GREEN   "\x1B[32m"
#define RED		"\033[31m"

#include <iostream>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque< T > >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::iterator const_iterator;

        MutantStack() : std::stack<T, Container>() {} 
        
        MutantStack<T, Container>(const MutantStack<T, Container>& other)
        {
            *this = other;
        }

        MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs)
        {
            if (this != &rhs)
                this->c = rhs.c;
            return (*this);
        }

        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

        const_iterator begin() const
        {
            return this->c.begin();
        }

        const_iterator end() const
        {
            return this->c.end();
        }
};

#endif