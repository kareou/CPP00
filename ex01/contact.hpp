/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:51:41 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/29 15:24:19 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"module02.h"

class contact
{
private:
public:
	std::string FirstName;
	std::string LastName;
	std::string DrackestSecret;
	std::string NickNanme;
	std::string	PhoneNumber;
	contact(/* args */);
	~contact();
};

contact::contact(/* args */)
{
}

contact::~contact()
{
}

