/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:13:51 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/31 11:20:43 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"module02.h"

class Phonebook
{
private:
	Contact phone[8];
public:
	int		contact_number;
	void	set_contact(int i);
	void	get_contact(int i);
	void	list_contact(void);
	Phonebook();
	~Phonebook();
};

#endif
