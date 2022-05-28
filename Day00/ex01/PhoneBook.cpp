/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <mskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:00:06 by mskeleto          #+#    #+#             */
/*   Updated: 2021/11/02 18:01:20 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(int index)
{
    std::cout << "Please follow instructions for correct adding information about new contact" << std::endl;
    _friends[index].set_first_name();
    _friends[index].set_last_name();
    _friends[index].set_nickname();
    _friends[index].set_phone_number();
    _friends[index].set_darkest_secret();
}

void align_print(std::string str)
{
    int i;
    int limit;

    limit = 10 - int(str.size());
    for(i = 0; i < limit; i++)
        std::cout << " ";
    if (str.size() == 10)
    {
        std::cout << str.substr(0, 9);
        std::cout << ".";
    }
    else
        std::cout << str;
    std::cout << "|";
}

void PhoneBook::search(){
    int id;
    int correct;
    int i;
    std::string tmp;

    std::cout << "____________________________________________" << std::endl;
    std::cout << "                                            " << std::endl;
    std::cout << "     index|first name| last name|  nickname|" << std::endl; 
    std::cout << "____________________________________________" << std::endl;
    i = -1;
    while(_friends[++i].get_name_size() != 0)
    {
        std::cout << "         "<< i + 1 << "|";
        tmp = _friends[i].get_first_name();
        align_print(tmp);
        tmp = _friends[i].get_last_name();
        align_print(tmp);
        tmp = _friends[i].get_nickname();
        align_print(tmp);
        std::cout << std::endl;
    }
    std::cout << "____________________________________________" << std::endl;
    std::cout << "Please enter contact's index (1 <= index <= 8): ";
    std::cin >> id;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767,'\n');
        std::cout << "Bad index" << std::endl;
    }
    else
    {
        correct = id  - 1;
        if (id < 1 || id > 8)
            std::cout << id << " not available index" << std::endl;
        else if (_friends[correct].get_name_size() == 0)
            std::cout << "Contact doesn't exist" << std::endl;
        else
            _friends[correct].get_contact_inf(id);
    }
}