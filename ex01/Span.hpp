#ifndef SPAN_HPP
#define SPAN_HPP

#define RESET	"\033[0m"
#define BLUE	"\033[1;34m"
#define GREEN   "\x1B[32m"
#define RED		"\033[31m"

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <exception> 

class Span
{
    public:
        Span();
        Span(const Span& );
        Span& operator=(const Span& );
        Span(unsigned int );
        ~Span();
        void addNumber(int);
        int shortestSpan();
        int longestSpan();
        // my functions
        bool find(int ) const;
    
    private:
        std::vector<int> _vecSpan;
        unsigned int _size;

        class AlreadyFullException : public std::exception
        {
            public:
                const char * what() const throw()
                {
                    return ("Exception: There is no space to add an element!");
                }
        };

        class EmptySpanException : public std::exception
        {
            public:
                const char * what() const throw()
                {
                    return ("Exception: empty, no elements found!");
                }
        };

};

#endif