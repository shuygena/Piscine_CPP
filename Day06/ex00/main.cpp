#include "conversion.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
        display(argv[1]);
    else
        std::cerr << "Wrong arguments count.\n";
    if (*argv == NULL)
        return 1;
    return 0;
}