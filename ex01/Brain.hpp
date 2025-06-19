/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:34:52 by skock             #+#    #+#             */
/*   Updated: 2025/06/19 13:58:32 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& other);
		std::string	get_ideas(int index);
		void		set_ideas(std::string line, int index);
};
