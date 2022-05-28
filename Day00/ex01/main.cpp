/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <mskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:00:12 by mskeleto          #+#    #+#             */
/*   Updated: 2021/11/02 17:23:13 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    int i;
    std::string cmd;
    PhoneBook blank;

    i = 0;
    std::cout << "       Welcome my Awesome PhoneBook" << std::endl;
    std::cout << "********************************************" << std::endl;
    while(1)
    {
        std::cout << "Choose command: ADD, SEARCH or EXIT:" << std::endl;
        std::cin >> cmd;
        while(cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
        {
            std::cout << "Choose command: ADD, SEARCH or EXIT:" << std::endl;
            std::cin >> cmd;
        }
        if (cmd == "ADD")
            blank.add(i % 8);
        if (cmd == "SEARCH")
            blank.search();
        if (cmd == "EXIT")
            return (0);
        i += int (cmd == "ADD");
    }
    return 0;
}
