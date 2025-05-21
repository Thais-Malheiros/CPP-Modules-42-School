/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:01:21 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:33:51 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:
	/*Attribute*/
		std::string	_ideas[100];
	public:
	/*Constructors*/
		Brain(void);
		Brain(const std::string idea);
		Brain(const Brain& other);
		/*Destructor*/
		~Brain(void);
		/*Operator overload*/
		Brain &operator=(Brain const &other);
		/*Setter*/
		void	setIdeas(int idx, const std::string idea);
		/*Getter*/
		std::string	getIdeas(int idx);
};

#endif
