#include "Karen.hpp"


void Karen::debug( void )
{
    std::cout << "[ DEBAG ]" << std::endl;
    std::cout << "I love to get extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
    << "I just love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more "
    << "money. You don’t put enough! If you did I would not have "
    << "to ask for it!" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for "
    << "free. I’ve been coming here for years and you just started"
    << " working here last month." << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now."
            << std::endl;
}
    
void Karen::complain( std::string level )
{
    int lvl;

    lvl = 1 * (level == "DEBUG") + 2 * (level == "INFO") + 3 * (level == "WARNING") + 4 * (level == "ERROR");
    switch(lvl)
    {
        case 1:
                this->debug();
                break;
        case 2:
                this->info();
                break;
        case 3:
                this->warning();
                break;
        case 4:
                this->error();
                break;
        default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break ;
    }
}