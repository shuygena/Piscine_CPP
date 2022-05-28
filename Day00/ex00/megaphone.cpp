/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <mskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:35:48 by mskeleto          #+#    #+#             */
/*   Updated: 2021/10/29 19:53:49 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (i = 1; i < argc; i++)
        {
            for (j = 0; argv[i][j] != '\0'; j++)
                std::cout << char(argv[i][j] - (argv[i][j] >= 'a' && argv[i][j] <= 'z') * 32);
            std::cout << std::endl;
        }
    }
    return (0);
}