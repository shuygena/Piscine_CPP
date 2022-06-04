#include "Bureaucrat.hpp"

int main(void)
{
    {
    Form       Gryffindor("Gryffindor", 50, 48);
    Bureaucrat Minevra("Minevra", 2);
    Bureaucrat Severus("Severus", 82);
    std::cout << Gryffindor;
    std::cout << Minevra;
    std::cout << Severus;
    Minevra.signForm(Gryffindor);
    Severus.signForm(Gryffindor);
    }

    try
    {
        Form Flamingo("Flamingo", -1, 33);
    }
    catch(std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
        try
    {
        Form Hagrid("Flamingo", 45, 155);
    }
    catch(std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
    
    return 0;
}