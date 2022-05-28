/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <mskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:03:35 by mskeleto          #+#    #+#             */
/*   Updated: 2021/11/01 18:40:00 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name()
{
    std::string first_name;

    std::cout << "Please enter contact's first name: ";
    std::cin >> first_name;
    _first_name = first_name;
}

void Contact::set_last_name()
{
    std::string last_name;

    std::cout << "Please enter contact's last name: ";
    std::cin >> last_name;
    _last_name = last_name;
}

void Contact::set_nickname()
{
    std::string nickname;

    std::cout << "Please enter contact's nickname: ";
    std::cin >> nickname;
    _nickname = nickname;
}

void Contact::set_phone_number()
{
    std::string phone_number;

    std::cout << "Please enter contact's phone number: ";
    std::cin >> phone_number;
    _phone_number = phone_number;
}

void Contact::set_darkest_secret()
{
    std::string secret;

    std::cout << "Shhhhh... Please enter contact's darkest secret: ";
    std::cin >> secret;
    _darkest_secret = secret;
}

void Contact::get_contact_inf(int index)
{
    std::cout << "index          | " << index << std::endl;
    std::cout << "first name     | " << _first_name << std::endl;
    std::cout << "last name      | " << _last_name << std::endl;
    std::cout << "nickname       | " << _nickname << std::endl;
    std::cout << "phone number   | " << _phone_number << std::endl;
    std::cout << "darkest secret | " << _darkest_secret << std::endl;
}

int Contact::get_name_size()
{
    return(_first_name.size());
}

std::string Contact::get_first_name()
{
    if (_first_name.size() > 10)
        return (_first_name.substr(0, 10));
    return(_first_name);
}

std::string Contact::get_last_name()
{
    if (_last_name.size() > 10)
        return (_last_name.substr(0, 10));
    return(_last_name);
}

std::string Contact::get_nickname()
{
    if (_nickname.size() > 10)
        return (_nickname.substr(0, 10));
    return(_nickname);
}