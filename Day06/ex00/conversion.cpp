#include "conversion.hpp"

void display(std::string arg)
{
    if (arg.size() == 1 && !std::isdigit(arg[0]))
        outLikeChar(arg[0]);
    else
        outLikeNumber(arg);
}

bool isdigits(const std::string &str)
{
    if (str[0] == '-')
    {
        std::string neg = str.substr(1);
        return neg.find_first_not_of("0123456789") == std::string::npos;
    }
    return str.find_first_not_of("0123456789") == std::string::npos;
}

bool isfloat(std::string str)
{
    size_t dot;
    size_t f;
    
    f = str.find('f');
    dot = str.find('.');
    if (f != std::string::npos)
    {
        if (f == str.size() - 1)
        {
            if (isdigits(str.substr(0, dot)) && isdigits(str.substr(dot + 1, str.size() - dot - 2)))
                return (true);
            return false; 
        }
        return (false);
    }
    return (false);
}

bool isdouble(std::string str)
{
    int dot;
    
    dot = str.find('.');
    if (isdigits(str.substr(0, dot)) && isdigits(str.substr(dot + 1, str.size() - dot - 1)))
        return (true);
    return false; 
}

void outLikeNumber(std::string arg)
{
    long long valueInt;
    float valueFloat;
    double valueDouble;

    if (arg == "nan" || arg == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (arg == "inf" || arg == "inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else if (arg == "-inf" || arg == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if (isdigits(arg) && arg.size() < 12)
    {
        const char *str = arg.c_str();
        char *end = nullptr;
        valueInt = std::strtoll(str, &end, 10);
        valueFloat = static_cast<float>(valueInt);
        valueDouble = static_cast<double>(valueInt);
        outInt(valueInt);
        outFD(valueFloat, valueDouble);
    }
    else if (isfloat(arg))
    {
        valueFloat = std::atof(arg.c_str());
        valueDouble = static_cast<double>(valueFloat);
        valueInt = static_cast<long long>(valueFloat);
        outInt(valueInt);
        outFD(valueFloat, valueDouble);
    }
    else if(isdouble(arg))
    {
        valueDouble = static_cast<double>(std::atof(arg.c_str()));
        valueFloat = static_cast<float>(valueDouble);
        valueInt = static_cast<long long>(valueDouble);
        outInt(valueInt);
        outFD(valueFloat, valueDouble);
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void outInt(long long valueInt)
{
    if (valueInt < 127 && valueInt > 30)
        std::cout << "char: '" << static_cast<char>(valueInt) << "'"<< std::endl;
    else if((valueInt < 31 && valueInt > -129) || valueInt == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    if (valueInt  < 2147483648 && valueInt > -2147483649)
        std::cout << "int: " << valueInt << std::endl;
    else
        std::cout << "int: impossible" << std::endl;      
}

void outFD(float valueFloat, double valueDouble)
{
    if (std::fmod(valueFloat, 1.0) == 0)
    {
        if (valueFloat == INFINITY)
            std::cout << "float: " << valueFloat << "f" << std::endl;
        else
            std::cout << "float: " << valueFloat << ".0f" << std::endl;
        std::cout << "double: " << valueDouble << ".0" << std::endl; 
    }
    else
    {
        std::cout << "float: " << valueFloat << "f" << std::endl;
        std::cout << "double: " << valueDouble << std::endl;
    }
}

void outLikeChar(char arg)
{
    double d;
    float f;
    int i;

    i = static_cast<int>(arg);
    f = static_cast<float>(arg);
    d = static_cast<double>(arg);

    if (arg < 31 || arg == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << arg << "'"<< std::endl;
    std::cout << "int: " << i << std::endl;
    if (std::fmod(f, 1.0) == 0)
    {
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl; 
    }
    else
    {
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }  
}