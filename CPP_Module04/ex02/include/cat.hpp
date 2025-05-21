/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:39:39 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 12:45:20 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "aanimal.hpp"
# include "brain.hpp"

class	Cat : public AAnimal
{
	private:
		Brain*	_catBrain;
	public:
		/*Constructors*/
		Cat(void);
		Cat(const std::string type);
		Cat(const Cat& other);
		/*Destructor*/
		~Cat(void);
		/*Operator overload*/
		Cat &operator=(Cat const &other);
		/*Method*/
		void	makeSound(void) const;
};

#endif
