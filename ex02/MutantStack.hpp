#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack
{
    public:
        MutantStack();
        MutantStack(const MutantStack& );
        MutantStack& operator=(const MutantStack& );
        ~MutantStack();
        void push();
        void pop();
        T top();
        T begin();
        T end();

};

#endif