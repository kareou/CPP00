/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:48:39 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/29 16:55:38 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "module02.h"

int main()
{
	phonebook book;
	int index;
	std::string stat;
	book.contact_number = 0;
		while (1)
		{
			std::cout << "choose a command form ADD | SEARCH | EXIT : ";
			std::getline(std::cin, stat);
		if (stat == "ADD")
		{
			if (book.contact_number > 7)
				book.contact_number = 0;
			book.set_contact(book.contact_number);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			book.contact_number++;
		}
		else if (stat == "SEARCH")
		{
			book.list_contact();
			std::cout << "what contact you want to see : ";
			std::cin >> index;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			book.get_contact(index);
		}
		else if (stat == "EXIT")
		{
			std::cout << "goodbbey " << std::endl;
			break;
		}
	}
}
