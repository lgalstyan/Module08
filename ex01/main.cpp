#include "Span.hpp"

int main() {
  try
  {
    Span sp = Span(5);
    // Span sp_empty;
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.shortestSpan();
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp_empty.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }
  
return 0; }