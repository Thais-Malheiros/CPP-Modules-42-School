/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:05:44 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 12:30:19 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class	AAnimal
{
	protected:
		std::string	_type;
	public:
		/*Constructors*/
		AAnimal(void);
		AAnimal(const std::string type);
		AAnimal(const AAnimal& other);
		/*Destructor*/
		virtual ~AAnimal(void);
		/*Operator overload*/
		AAnimal &operator=(AAnimal const &other);
		/*Getter*/
		const std::string	getType(void) const;
		/*Pure virtual function*/
		virtual void	makeSound(void) const = 0;
};

#endif
