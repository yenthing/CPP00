/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynguyen <ynguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:23:25 by ynguyen           #+#    #+#             */
/*   Updated: 2024/04/04 15:32:20 by ynguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <string>

class PhoneBook
{
    private:
        Contact contact[8];
        int print_number(std::string str);
    public:
        void get_input_p(int id);
        void search_all_contact(int id);
        void search_contact(int id);
};

#endif
