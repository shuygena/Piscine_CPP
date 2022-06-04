#include "Bureaucrat.hpp"

int main(void)
{
    {
    Bureaucrat Minevra("Minevra", 28);
    std::cout << Minevra;
    try
    {
        Minevra.incrementGrade();
    }
    catch (std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
    std::cout << Minevra;
    try
    {
        for (int i = 0; i < 27; i++)
            Minevra.incrementGrade();
    }
    catch (std::exception& ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
    std::cout << Minevra;
    }

    {
    Bureaucrat Severus("Severus", 146);
    std::cout << Severus;
    try
    {
        for (int i = 0; i < 5; i++)
            Severus.decrementGrade();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
    std::cout << Severus;
    }

    try
    {
        Bureaucrat Hagrid("Hagrid", -1);
    }
    catch(std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
        try
    {
        Bureaucrat Hagrid("Hagrid", 151);
    }
    catch(std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}