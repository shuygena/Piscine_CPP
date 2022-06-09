#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span test1(7);
    try
    {
        test1.addRange(6);
        std::cout << "test1 longest span: "<< test1.longestSpan() << std::endl;
        std::cout << "test1 shortest span: "<< test1.shortestSpan() << std::endl;
        test1.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Span test2(10000);
    try
    {
        test2.addRange(10000);
        std::cout << "test2 longest span: "<< test2.longestSpan() << std::endl;
        std::cout << "test2 shortest span: "<< test2.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    };
    Span test3(4);
    std::multiset<int> tester;
    tester.insert(2);
    tester.insert(1);
    tester.insert(4);
    tester.insert(2);
    std::multiset<int>::iterator first = tester.begin();
    std::multiset<int>::iterator last = tester.end();
    try
    {
        test3.addNumber(first, last);
        std::cout << "test3 longest span: "<< test3.longestSpan() << std::endl;
        std::cout << "test3 shortest span: "<< test3.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    Span test4(1);
    try
    {
        test4.addRange(2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    test4.addNumber(1);
    try
    {
        std::cout << "test4 shortest span: "<< test4.shortestSpan() << std::endl;
        test1.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "test4 longest span: "<< test4.longestSpan() << std::endl;
        test1.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    test4.addNumber(2);
    return (0);
}