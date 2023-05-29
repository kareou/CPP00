/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:13:51 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/29 16:26:41 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"module02.h"

class phonebook
{
private:
	contact phone[8];
public:
	int	contact_number;
	void set_contact(int i)
	{
		std::cout << "first name : ";
		std::getline(std::cin,phone[i].FirstName);
		std::cout << "last name : ";
		std::getline(std::cin,phone[i].LastName);
		std::cout << "nickname : ";
		std::getline(std::cin,phone[i].NickNanme);
		std::cout << "darkest secret : ";
		std::getline(std::cin,phone[i].DrackestSecret);
		std::cout << "phone number : ";
		std::cin >> phone[i].PhoneNumber;
	}
	void get_contact(int i)
	{
		if(i > contact_number || i > 7)
		{
			std::cout << "wrong index" << std::endl;
			return ;
		}
		std::cout << "first name : ";
		std::cout << phone[i].FirstName << std::endl;
		std::cout << "last name : ";
		std::cout << phone[i].LastName << std::endl;
		std::cout << "nickname : ";
		std::cout << phone[i].NickNanme << std::endl;
		std::cout << "darkest secret : ";
		std::cout << phone[i].DrackestSecret << std::endl;
		std::cout << "phone number : ";
		std::cout << phone[i].PhoneNumber << std::endl;
	}
	void	list_contact()
	{
		int j = 0;
		while (j < contact_number && j < 7)
		{
			std::cout << j << "|" << phone[j].FirstName << "|";
			std::cout << phone[j].LastName << "|";
			std::cout << phone[j].NickNanme << std::endl;
			j++;
		}

	}
};

// phonebook::phonebook(/* args */)
// {
// }

// phonebook::~phonebook()
// {
// }
