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

Span::Span(unsigned int N) : _size(N)
{

}

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
    sort(_vecSpan.begin(), _vecSpan.end());
    std::vector<int>::iterator it1 = _vecSpan.begin();
    std::vector<int>::iterator it2 = it1;
    int res = it2 - it1;
    ++it2;
    for (; it1 != _vecSpan.end(); ++it1, ++it2)
    {
        if (it2 - it1 < res)
            res = it2 - it1;
    }
    std::cout << res;
    return (res);
}

int Span::longestSpan()
{
    if (_size == 0 || _vecSpan.size() == 0)
        throw EmptySpanException();
    sort(_vecSpan.begin(), _vecSpan.end());
    //deleted
    for (unsigned int i = 0; i < _vecSpan.size(); ++i) {
        std::cout << _vecSpan[i] << " ";
    }
    //deleted
    return _vecSpan.end() - _vecSpan.begin();
}
