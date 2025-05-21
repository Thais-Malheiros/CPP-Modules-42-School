/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:49:09 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:16:54 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "animal.hpp"

class	Dog : public Animal
{
	public:
		/*Constructors*/
		Dog(void);
		Dog(const std::string type);
		Dog(const Dog& other);
		/*Destructor*/
		~Dog(void);
		/*Operator overload*/
		Dog &operator=(Dog const &other);
		/*Method*/
		void	makeSound(void) const;
};

#endif