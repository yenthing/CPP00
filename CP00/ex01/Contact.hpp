/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynguyen <ynguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:23:25 by ynguyen           #+#    #+#             */
/*   Updated: 2024/04/04 15:19:17 by ynguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <stdio.h>
# include <utility>
# include <string>
# include <ctype.h>
# include <limits>
# include <iomanip>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
        void        get_fn();
        void        get_ln();
        void        get_nn();
        void        get_pn();
        void        get_ds();
        bool	    is_ascii(const std::string input);
        bool	    is_blank(const std::string input);
    public:
        Contact();
        ~Contact();
        static void eof_check();
        bool is_number(const std::string input);
        void print_contact_4(int id);
        void print_contact_all(int id);
        void get_input( void );
};

#endif