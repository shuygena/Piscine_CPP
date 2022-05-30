#include "Karen.hpp"

int main(int argc, char *argv[])
{
    Karen filter;

    if (argc != 2)
        filter.complain("error");
    else
        filter.complain(argv[1]);
    return (0);
}