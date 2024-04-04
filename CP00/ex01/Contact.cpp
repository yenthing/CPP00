/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynguyen <ynguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:15:31 by ynguyen           #+#    #+#             */
/*   Updated: 2024/04/04 16:02:39 by ynguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->firstname = "";
	this->lastname = "";
	this->nickname = "";
	this->phonenumber = "";
	this->darkestsecret = "";
}

Contact::~Contact()
{
	return ;
}

void Contact::eof_check()
{
	if (std::cin.eof())
	{
		std::cerr << "EOF detected!" << std::endl;
		exit(0);
	}
}

bool	Contact::is_ascii(const std::string input)
{
	for (size_t i = 0; i < input.length(); ++i)
	{
		if (!std::isprint(input[i]))
			return (false);
	}
	return (true);
}

bool	Contact::is_number(const std::string input)
{
	for (size_t i = 0; i < input.length(); ++i)
	{
		if (!std::isdigit(input[i]))
			return (false);
		else if (input.length() < 1)
			return (false);
	}
	return (true);
}

bool	Contact::is_blank(const std::string input)
{
	if (input.empty())
		return (true);
	if (*input.begin() == '\n')
		return (true);
	for (size_t i = 0; i < input.length(); ++i)
	{
		if (std::isspace(input[i]))
			return (true);
	}
	return (false);
}

void Contact::get_fn()
{
	bool valid = true;
	
	while (valid)
	{
		std::cout << "Please enter your First Name: ";
		std::string input;
		std::getline(std::cin, input);
		eof_check();
		if (is_ascii(input) && !is_blank(input))
		{
			std::cout << "\033[1;32mYou entered First Name as: \033[0m" << input << std::endl;
			this->firstname = input;
			valid = false;
		}
		else
		{
			std::cout << "\033[1;31mInvalid input!\033[0m" << std::endl;
			std::cin.clear();
		}
	}
}

void Contact::get_ln()
{
	bool valid = true;

	while (valid)
	{
		std::cout << "Please enter your Last Name: ";
		std::string input;
		std::getline(std::cin, input);
		eof_check();
		if (is_ascii(input) && !is_blank(input))
		{
			std::cout << "\033[1;32mYou entered Last Name as: \033[0m" << input << std::endl;
			this->lastname = input;
			valid = false;
		}
		else
		{
			std::cout << "\033[1;31mInvalid input!\033[0m" << std::endl;
			std::cin.clear();
		}
	}
}

void Contact::get_nn()
{
	bool valid = true;
	
	while (valid)
	{
		std::cout << "Please enter your Nick Name: ";
		std::string input;
		std::getline(std::cin, input);
		eof_check();
		if (is_ascii(input) && !input.empty())
		{
			std::cout << "\033[1;32mYou entered Nick Name as: \033[0m" << input << std::endl;
			this->nickname = input;
			valid = false;
		}
		else
		{
			std::cout << "\033[1;31mInvalid input!\033[0m" << std::endl;
			std::cin.clear();
		}
	}
}

void Contact::get_pn()
{
	bool valid = true;
	
	while (valid)
	{
		std::cout << "Please enter your Phone Number: ";
		std::string input;
		std::getline(std::cin, input);
		eof_check();
		if (is_number(input) && !input.empty())
		{
			std::cout << "\033[1;32mYou entered Phone Number as: \033[0m" << input << std::endl;
			this->phonenumber = input;
			valid = false;
		}
		else
		{
			std::cout << "\033[1;31mInvalid input!\033[0m" << std::endl;
			std::cin.clear();
		}
	}
}

void Contact::get_ds()
{
	bool valid = true;
	
	while (valid)
	{
		std::cout << "Please enter your Darkest Secret: ";
		std::string input;
		std::getline(std::cin, input);
		eof_check();
		if (is_ascii(input) && !input.empty())
		{
			std::cout << "\033[1;32mYou entered Darkest Secret as: \033[0m" << input << std::endl;
			this->darkestsecret = input;
			valid = false;
		}
		else
		{
			std::cout << "\033[1;31mInvalid input!\033[0m" << std::endl;
			std::cin.clear();
		}
	}
}

void Contact::get_input( void )
{
	this->get_fn();
	this->get_ln();
	this->get_nn();
	this->get_pn();
	this->get_ds();
	std::cout << "\033[1;33mYou have added 1 contact/s to your phonebook!\033[0m" << std::endl;
}

void Contact::print_contact_4(int id)
{
    std::cout << std::setw(7) << id;
    std::cout << std::setw(1) << " |";
    std::cout << std::setw(11) << (firstname.length() > 10 ? firstname.substr(0, 10) + "." : firstname) << "|";
    std::cout << std::setw(11) << (lastname.length() > 10 ? lastname.substr(0, 10) + "." : lastname) << "|" ;
    std::cout << std::setw(11) << (nickname.length() > 10 ? nickname.substr(0, 10) + "." : nickname) << std::endl;
}

void Contact::print_contact_all(int id)
{
    std::cout << "    First Name: "  << this->firstname << std::endl;
	std::cout << "     Last Name: " << this->lastname << std::endl;
	std::cout << "     Nick Name: " << this->nickname << std::endl;
	std::cout << "  Phone Number: " << this->phonenumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestsecret << std::endl;
}
