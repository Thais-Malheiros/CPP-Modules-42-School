/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:13:54 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/09 11:35:54 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "../include/Form.hpp"
#include <fstream>

class	ShrubberyCreationForm : public Form {
	private:
	std::string	_target;
	public:
		/*constructors*/
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		/*destructor*/
		~ShrubberyCreationForm(void);
		/*operator overload*/
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
		/*getters*/
		std::string getTarget(void) const;
		/*Functions*/
		// int	createShrubbery(void);
		void action(void) const;
};

#endif