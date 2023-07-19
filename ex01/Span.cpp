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
    // //deleted
    // for (unsigned int i = 0; i < _vecSpan.size(); ++i) {
    //     std::cout << _vecSpan[i] << " ";
    // }
    // //deleted
    std::sort(_vecSpan.begin(), _vecSpan.end());
    // std::cout << std::endl << " sorted "<< std::endl;
    //deleted
    for (unsigned int i = 0; i < _vecSpan.size(); ++i) {
        std::cout << _vecSpan[i] << " ";
    }
    std::cout << std::endl;
    //deleted
    std::vector<int>::iterator it1 = _vecSpan.begin();
    std::vector<int>::iterator it2 = it1 + 1;
    int res = *it2 - *it1;
    std::cout << "res = " << res << std::endl;
    for (; it2 != _vecSpan.end() - 1; ++it1, ++it2)
    {
        std::cout << "it1 = " << *it1 << " it2 = " << *it2 << std::endl;
        if (*it2 - *it1 < res)
        {
            res = *it2 - *it1;
        }
    std::cout << "res = " << res << std::endl;
    }
    // std::cout << res;
    return (res);
}

int Span::longestSpan()
{
    if (_size == 0 || _vecSpan.size() == 0)
        throw EmptySpanException();
    sort(_vecSpan.begin(), _vecSpan.end());
    // //deleted
    // for (unsigned int i = 0; i < _vecSpan.size(); ++i) {
    //     std::cout << _vecSpan[i] << " ";
    // }
    // //deleted
    return _vecSpan.end() - _vecSpan.begin();
}
