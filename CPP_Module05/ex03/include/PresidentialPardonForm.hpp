/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:38:06 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/08 15:27:03 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "../include/Form.hpp"

class	PresidentialPardonForm : public Form {
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
		// void targetPardoned(void);
		void action(void) const;
};

#endif