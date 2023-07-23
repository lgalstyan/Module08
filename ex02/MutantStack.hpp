#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, typename  Cont>
class MutantStack : public std::stack<T, Cont>
{
    public:
        MutantStack() : std::stack<T, Cont> {}
        MutantStack<T, Cont>(const MutantStack<T, Cont>& other)
        {
            *this = other;
        }
        MutantStack<T, Cont>& operator=(const MutantStack<T, Cont>& rhs)
        {
            if (this != &rhs)
                this->c = rhs.c;
            return (*this);
        }
        ~MutantStack<T, Cont>(){}
        typedef typename std::stack<T, Cont>::container_type::iterator iter;
        typedef typename std::stack<T, Cont>::container_type::iterator const_iter;
        iter begin()
        {
            return this->c.begin();
        }
        iter end()
        {
            return this->c.end();
        }
        const_iter begin() const
        {
            return this->c.begin();
        }
        const_iter end() const
        {
            return this->c.end();
        }

};

#endif