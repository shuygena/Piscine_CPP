#include "easyfind.hpp"

int main()
{
    std::list<int> test_list;
    test_list.push_back(5);
    test_list.push_back(128);
    test_list.push_back(-21);
    test_list.push_back(42);
    try
    {
        std::list<int>::iterator iter = easyfind(test_list, 42);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::list<int>::iterator iter = easyfind(test_list, 666);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::vector<int> test_vector;
    test_vector.push_back(18);
    test_vector.push_back(21);
    test_vector.push_back(2457);
    test_vector.push_back(0);
    try
    {
        std::vector<int>::iterator iter = easyfind(test_vector, 21);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::vector<int>::iterator iter = easyfind(test_vector, 42);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::set<int> test_set;
    test_set.insert(11);
    test_set.insert(101);
    test_set.insert(14);
    test_set.insert(18);
    test_set.insert(2);
    test_set.insert(2000);
    try
    {
        std::vector<int>::iterator iter = easyfind(test_vector, 18);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::vector<int>::iterator iter = easyfind(test_vector, 666);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}