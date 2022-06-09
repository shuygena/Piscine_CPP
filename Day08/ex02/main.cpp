#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(42);
    mstack.push(21);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::list<int>::iterator itle = mlist.end();
    --itle;
    std::cout << "top: " << *itle << std::endl;
    mlist.pop_back();
    std::cout << "size: " << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(42);
    mlist.push_back(21);
    mlist.push_back(0);
    itle = mlist.end();
    std::list<int>::iterator itl = mlist.begin();
    ++itl;
    --itl;
    while(itl != itle)
    {
        std::cout << *itl << std::endl;
        ++itl;
    }
    return 0;
}