#include <iostream>

int main(void)
{
    std::string our_string = "HI THIS IS BRAIN";
    std::string *stringPTR = &our_string;
    std::string& stringREF = our_string;

    std::cout << "Addresss of the string: " << &our_string << std::endl;
    std::cout << "Address of the string by using pointer: " << stringPTR << std::endl;
    std::cout << "Address of the string by using reference: " << &stringREF << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}