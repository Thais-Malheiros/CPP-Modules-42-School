/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:56:51 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/06 10:46:53 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		/**Constructors */
		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& other);
		/**Destructor */
		~ScavTrap(void);
		/**Operator overload */
		ScavTrap &operator=(ScavTrap const &other);
		/**Methods */
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
