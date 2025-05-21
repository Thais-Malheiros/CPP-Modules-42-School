/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:38:06 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 09:37:30 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "../include/AForm.hpp"

class	PresidentialPardonForm : public AForm {
	private:
		std::string	_target;
	public:
		/*constructors*/
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		/*destructor*/
		~PresidentialPardonForm(void);
		/*operator overload*/
		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
		/*getters*/
		std::string getTarget(void) const;
		/*Functions*/
		void action(void) const;
};

#endif