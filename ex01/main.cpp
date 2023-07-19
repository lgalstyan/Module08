#include "Span.hpp"

int main()
{
  try
  {
    std::cout << GREEN << "-----------------Test1-----------------\n" << RESET;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << BLUE << "The shortest span is ";
    std::cout << GREEN << sp.shortestSpan() << std::endl << RESET;
    std::cout << BLUE << "The longest span is ";
    std::cout << GREEN << sp.longestSpan() << std::endl << RESET;
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }
  std::cout << std::endl;

  try
  {
    std::cout << GREEN << "-----------------Test2-----------------\n" << RESET;
    Span sp_empty;
    std::cout << GREEN << sp_empty.shortestSpan() << std::endl << RESET;
    std::cout << GREEN << sp_empty.longestSpan() << std::endl << RESET;
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }
  std::cout << std::endl;

  try
  {
    std::cout << GREEN << "-----------------Test3-----------------\n" << RESET;
    Span randomNumbers = Span(100);
    srand(static_cast<int>(time(0)));
    int num;

    for (int i = 0; i < 100; ++i)
    {
      num = rand() % 1000 + 1;
        if (!randomNumbers.find(num))
          randomNumbers.addNumber(num);
    }

    std::cout << BLUE << "The shortest span is ";
    std::cout << GREEN << randomNumbers.shortestSpan() << std::endl << RESET;
    std::cout << BLUE << "The longest span is ";
    std::cout << GREEN << randomNumbers.longestSpan() << std::endl << RESET;
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }
  
return 0; }