#include "MutantStack.hpp"

int main()
{
    std::cout << GREEN << "-----------------subject test---------------\n" << RESET;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << GREEN << "-----------------My first test---------------\n" << RESET;
    {
        int multiply = 10;
        MutantStack<int> stack;
        stack.push(1);
        stack.push(2);
        stack.push(3);
        std::cout << "Stack is: ";
        for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
        {
            std::cout << *it << " ";
        }
        for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
        {
            *it *= multiply;
            *it += 1;
        }

        std::cout << "\nStack elements after modification: ";
        for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
        {
            std::cout << *it << " ";
        }
            std::cout << std::endl;
    }

    std::cout << GREEN << "-----------------My second test---------------\n" << RESET;
    {
        MutantStack<double> doubleStack;

        doubleStack.push(3.14);
        doubleStack.push(1.618);
        doubleStack.push(2.718);
        doubleStack.push(0.577);

        std::cout << "Stack elements using const_iterator: ";
        for (MutantStack<double>::const_iterator cit = doubleStack.begin(); cit != doubleStack.end(); ++cit)
        {
            std::cout << *cit << " "; 
        }
        std::cout << std::endl;


        MutantStack<double> copyStack = doubleStack;
        doubleStack.pop();

        std::cout << "Original stack size: " << doubleStack.size() << std::endl;
        std::cout << "Copy stack size: " << copyStack.size() << std::endl;

    }
    return 0;
}