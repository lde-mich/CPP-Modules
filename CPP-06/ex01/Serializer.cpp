/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:28:50 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/27 14:06:21 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer()
{

}

Serializer::Serializer(Serializer const &obj)
{
	(*this) = obj;
}

Serializer::~Serializer()
{

}


Serializer Serializer::operator=(Serializer const &obj)
{
	(void) obj;

	return (*this);
}


uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t raw;
	raw = reinterpret_cast<uintptr_t>(ptr);

	return (raw);
}


Data* Serializer::deserialize(uintptr_t raw)
{
	Data *new_ptr;
	new_ptr = reinterpret_cast<Data *>(raw);

	return (new_ptr);
}
























