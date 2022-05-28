/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <mskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:59:25 by mskeleto          #+#    #+#             */
/*   Updated: 2021/11/02 17:14:00 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

void align_print(std::string tmp);

class PhoneBook{

public:

    void add(int index);
    void search();

private:
    Contact _friends[8];
};

#endif