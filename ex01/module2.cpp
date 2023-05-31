/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:48:39 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/31 12:23:36 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "module02.h"

int main()
{
	Phonebook book;
	std::string index;
	std::string stat;
	int cont_num = 0;
	while (1)
	{
		std::cout << "choose a command form ADD | SEARCH | EXIT : ";
		std::getline(std::cin, stat);
		if (stat == "ADD")
		{
			if (cont_num == 8)
				cont_num = 0;
			book.set_contact(cont_num);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (book.contact_number <= 8)
				book.contact_number++;
			cont_num++;
		}
		else if (stat == "SEARCH")
		{
			book.list_contact();
			std::cout << "what contact you want to see : ";
			while (true)
			{
				std::getline(std::cin, index);
				if (index.length() == 1 && std::isdigit(index[0]))
					break;
				else
					std::cout << "what contact you want to see : ";
			}
			book.get_contact(std::stoi(index));
		}
		else if (stat == "EXIT")
		{
			std::cout << "goodbbey " << std::endl;
			break;
		}
		else
			std::cout << "wrong command" << std::endl;
	}
}
