/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:27:46 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 11:06:22 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern {
	public:
		/*constructors*/
		Intern(void);
		Intern(const Intern &other);
		/*destructors*/
		~Intern(void);
		/*operator overload*/
		Intern& operator=(const Intern &other);
		/*functions*/
		Form *makeForm(const std::string formToCreate, const std::string targetToForm);
		/*exception class*/
		class	invalidArgException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif