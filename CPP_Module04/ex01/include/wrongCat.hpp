/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:02:07 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:21:04 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "wrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		/*Constructors*/
		WrongCat(void);
		WrongCat(const std::string type);
		WrongCat(const WrongCat& Cther);
		/*Destructor*/
		~WrongCat(void);
		/*Operator overload*/
		WrongCat &operator=(WrongCat const &other);
		/*Method*/
		void	makeSound(void) const;
};

#endif