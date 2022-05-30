#include <iostream>
#include <fstream>

void stream_it(std::ofstream *dst, std::string s1, std::string s2, std::string line)
{
    size_t start = 0;
    size_t finish = 0;

    while(line[start] != '\0')
    {
        finish = line.find(s1, start);
        if (finish == std::string::npos)
        {
            finish = line.size();
            *dst << line.substr(start, finish);
            start = finish;
        }
        else
        {
            *dst << line.substr(start, finish - start);
            *dst << s2;
            start = finish + s1.size();
        }
    }
    *dst << std::endl;
}

int replace_it(std::string file, std::string s1, std::string s2)
{
    std::ifstream src(file);
    std::string line;

    if (!src.is_open())
        return (-1);

    std::ofstream dst(file.append(".replace"));
    if (!dst.is_open())
        return (-1);       
    while(std::getline(src, line))
        stream_it(&dst, s1, s2, line);
    return (0);
}

int main(int argc, char **argv)
{
    std::string srcFile;
    if (argc != 4)
    {
        std::cout << "error: bad arguments" << std::endl;
        std::cout << "./reaplace [file name] [str for remove] [destiny str]" << std::endl;
        return (-1);
    }
    if (argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        std::cout << "error: empty string" << std::endl;
        return (-1);
    }
    if (replace_it(argv[1], argv[2], argv[3]) == - 1)
        std::cout << "error: bad opening" << std::endl;
    return (0);
}