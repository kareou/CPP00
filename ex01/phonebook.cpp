/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:58:43 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/31 12:02:06 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "module02.h"

void	Phonebook::get_contact(int i)
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

void	Phonebook::list_contact(void)
{
	if (contact_number == 0)
	{
		std::cout << "no contact" << std::endl;
		return ;
	}
	int j = 0;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (j < contact_number && j < 8)
	{
		std::cout << std::setw(10) << j << "|";
		if (phone[j].FirstName.length() > 10)
			std::cout << std::setw(10) << phone[j].FirstName.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].FirstName << "|";
		if (phone[j].LastName.length() > 10)
			std::cout << std::setw(10) << phone[j].LastName.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].LastName << "|";
		if (phone[j].NickNanme.length() > 10)
			std::cout << std::setw(10) << phone[j].NickNanme.substr(0, 9) + "." << "|" << std::endl;
		else
			std::cout << std::setw(10) << phone[j].NickNanme << "|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		j++;
	}
}
void	Phonebook::set_contact(int i)
{
	std::cout << "first name : ";
	while (std::cin.peek() == '\n')
	{
		std::cout << "first name : ";
		std::cin.ignore();
	}
	std::getline(std::cin,phone[i].FirstName);
	std::cout << "last name : ";
	while (std::cin.peek() == '\n')
	{
		std::cout << "last name : ";
		std::cin.ignore();
	}
	std::getline(std::cin,phone[i].LastName);
	std::cout << "nickname : ";
	while (std::cin.peek() == '\n')
	{
		std::cout << "nickname : ";
		std::cin.ignore();
	}
	std::getline(std::cin,phone[i].NickNanme);
	std::cout << "darkest secret : ";
	while (std::cin.peek() == '\n')
	{
		std::cout << "darkest secret : ";
		std::cin.ignore();
	}
	std::getline(std::cin,phone[i].DrackestSecret);
	std::cout << "phone number : ";
	while (std::cin.peek() == '\n')
	{
		std::cout << "phone number : ";
		std::cin.ignore();
	}
	std::cin >> phone[i].PhoneNumber;
}
Phonebook::Phonebook(/* args */)
{
	contact_number = 0;
}

Phonebook::~Phonebook()
{
}
