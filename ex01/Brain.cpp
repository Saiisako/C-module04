/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:35:03 by skock             #+#    #+#             */
/*   Updated: 2025/06/19 13:58:28 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Hello";
}

Brain::~Brain() {std::cout << "Brain destructor called" << std::endl;}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::string Brain::get_ideas(int index)
{
	return this->ideas[index];
}

void Brain::set_ideas(std::string line, int index)
{
	this->ideas[index] = line;
}
