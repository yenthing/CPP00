#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    int id = 0;

    while(true)
    {
        std::cout << "✨ Let's create an awesome phonebook for you ✨" << std::endl;
        std::cout << "Please enter ADD, SEARCH or EXIT: ";
        std::string input;
        if (!std::getline(std::cin, input))
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cerr << "\033[1;31mGetline Error!\033[0m" << std::endl;
            continue;
        }
        if (std::cin.eof())
	    {
	    	std::cerr << "EOF detected!" << std::endl;
            continue;
	    }
        if (input == "ADD")
        {
            if (id < 8)
            {
                phonebook.get_input_p(id);
                id++;
            }
            else
            {
                std::cout << "You have reached the maximum number of contacts. Do you want to replace the oldest contact? (Y/N): ";
                std::string input;
                if (!std::getline(std::cin, input))
                {
                    std::clearerr(stdin);
                    std::cin.clear();
                    std::cerr << "\033[1;31mGetline Error!\033[0m" << std::endl;
                    continue;
                }
                if (std::cin.eof())
                {
                    std::cerr << "EOF detected!" << std::endl;
                    continue;
                }
                if (input == "Y")
                {
                    int over_id = id % 8;
                    phonebook.get_input_p(over_id);
                    id++;
                }
                else if (input == "N")
                    ;
                else
                    std::cerr << "\033[1;31mInvalid input!\033[0m" << std::endl;
            }
        }
        else if (input == "SEARCH")
        {
            if (id == 0)
            {
                std::cerr << "\033[1;31mNo contacts available!\033[0m" << std::endl;
                continue;
            }
            else{
                phonebook.search_all_contact(id);
                phonebook.search_contact(id);
            }
        }
        else if (input == "EXIT")
        {
            std::cout << "👋 Goodbye! 👋" << std::endl;
            break;
        }
        else
            std::cerr << "\033[1;31mInvalid input!\033[0m" << std::endl;
    }
    return(0);
}
