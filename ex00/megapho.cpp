/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module00.c++                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:37:41 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/08 11:47:15 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
	int	i = 1;
	int	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if(av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
			std::cout << av[i][j];
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;

}
