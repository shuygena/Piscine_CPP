/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <mskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:59:10 by mskeleto          #+#    #+#             */
/*   Updated: 2021/11/01 18:50:05 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{

private:
    
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

public:

    void set_first_name();
    void set_last_name();
    void set_nickname();
    void set_phone_number();
    void set_darkest_secret();

    void get_contact_inf(int index);
    int get_name_size();
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();

};

#endif