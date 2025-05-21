/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:21:30 by tmalheir          #+#    #+#             */
/*   Updated: 2025/02/21 15:59:55 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPts;
		unsigned int	_enePts;
		unsigned int	_attDamage;
	public:
		/**Constructors */
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& other);
		/**Destructor */
		~ClapTrap(void);
		/**Operator overload */
		ClapTrap &operator=(ClapTrap const &other);
		/**Getters */
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;
		/**Setters */
		void	setName(const std::string name);
		void	setHitPoints(unsigned int hitPts);
		void	setEnergyPoints(unsigned int enePts);
		void	setAttackDamage(unsigned int attDamage);
		/**Methods */
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
