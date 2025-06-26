/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:14:42 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 13:29:58 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) 
{
	for (size_t i = 0; i < 4; i++)
	{
		if (copy._materias[i])
			_materias[i] = copy._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->_materias[i])
				delete _materias[i];
			if (other._materias[i])
				_materias[i] = other._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		delete this->_materias[i];
}

void MateriaSource::get_materia()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			std::cout << i << " :  "<< this->_materias[i]->getType() << std::endl;
	}	
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = materia->clone();
			delete materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type) {
			return _materias[i]->clone();
		}
	}
	return 0;
}
