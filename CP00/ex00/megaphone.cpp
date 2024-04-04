/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynguyen <ynguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:26:23 by ynguyen           #+#    #+#             */
/*   Updated: 2024/04/04 15:38:19 by ynguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for(int i = 1; i < ac; ++i)
        {
            for(int j = 0; av[i][j] != '\0'; ++j)
            {
                std::cout << (char)toupper(av[i][j]);
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}