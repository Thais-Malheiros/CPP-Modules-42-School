/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:32:19 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/07 10:39:12 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		/**Constructors */
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap& other);
		/**Destructor */
		~FragTrap(void);
		/**Operator overload */
		FragTrap &operator=(FragTrap const &other);
		/**Methods */
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
