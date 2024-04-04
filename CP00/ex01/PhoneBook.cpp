/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynguyen <ynguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:20 by ynguyen           #+#    #+#             */
/*   Updated: 2024/04/04 15:19:49 by ynguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::print_number(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (std::isdigit(str[i]))
            return (std::stoi(str));
    }
    return (-1);
}

void PhoneBook::get_input_p(int id)
{
    this->contact[id].get_input();
}

void PhoneBook::search_all_contact(int id)
{
    std::cout << "      ID| First Name|  Last Name|   Nickname" << std::endl;
    int limit;
    if (id > 8)
        limit = 8;
    else
        limit = id;
    for (int i = 0; i < limit; i++)
        contact[i].print_contact_4(i);
}
void PhoneBook::search_contact(int id)
{
    bool check = true;
    Contact con;
    
    while (check)
    {
        std::cout << "Please enter a specific ID number to see contact's Info: ";
        std::string input;
        if (!std::getline(std::cin, input))
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cerr << "\033[1;31mGetline Error!\033[0m" << std::endl;
            check = true;
        }
        std::cin.eof();
        if (!con.is_number(input) || input.empty())
        {
            std::cerr << "\033[1;31mInvalid input!\033[0m" << std::endl;
            check = false;
        }
         else
        {
            int contact_id = print_number(input);
            if (contact_id < 0 || contact_id > 7)
            {
                std::cerr << "\033[1;31mInvalid ID in search cont!\033[0m" << std::endl;
                check = false;
            }
            else if (contact_id < id && contact_id >= 0)
            {
                std::cout << "\033[1;33mHere is the ID you've asked for: \033[0m" << std::endl;
                contact[contact_id].print_contact_all(contact_id);
                check = false;
            }
            else
            {
                std::cerr << "\033[1;31mNo contact with this ID!\033[0m" << std::endl;
                check = false;
            }
        }
    }
}
