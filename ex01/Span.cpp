#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator=(const Span& rhs)
{
    if (this != &rhs)
    {
        this->_vecSpan = rhs._vecSpan;
        this->_size = rhs._size;
    }
    return *this;
}

Span::~Span() {}

Span::Span(unsigned int N) : _size(N) {}

void Span::addNumber(int elem)
{
    if (_size <= _vecSpan.size())
        throw AlreadyFullException();
    _vecSpan.push_back(elem);
}

int Span::shortestSpan()
{
    if (_size == 0 || _vecSpan.size() == 0)
        throw EmptySpanException();
    std::sort(_vecSpan.begin(), _vecSpan.end());
    std::vector<int>::iterator it1 = _vecSpan.begin();
    std::vector<int>::iterator it2 = it1 + 1;

    int res = *it2 - *it1;
    for (; it2 != _vecSpan.end() - 1; ++it1, ++it2)
    {
        if (*it2 - *it1 < res)
        {
            res = *it2 - *it1;
        }
    }
    return (res);
}

int Span::longestSpan()
{
    if (_size == 0 || _vecSpan.size() == 0)
        throw EmptySpanException();
    std::cout << *(_vecSpan.end()  - 1) << " " << *_vecSpan.begin()<< std::endl;
    sort(_vecSpan.begin(), _vecSpan.end());
    //deleted
    for (unsigned int i = 0; i < _vecSpan.size(); ++i) {
        std::cout << _vecSpan[i] << " ";
    }
    //deleted
    std::cout << std::endl <<*_vecSpan.end() << " " << *_vecSpan.begin()<< std::endl;
    return *(_vecSpan.end() - 1)  - *_vecSpan.begin();
}
