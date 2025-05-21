/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:03:08 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:18:47 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		/*Constructors*/
		WrongAnimal(void);
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal& other);
		/*Destructor*/
		virtual ~WrongAnimal(void);
		/*Operator overload*/
		WrongAnimal &operator=(WrongAnimal const &other);
		/*Getter*/
		const std::string	getType(void) const;
		/*Method*/
		void	makeSound(void) const;
};

#endif
