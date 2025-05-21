/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:21:19 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/08 15:27:03 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "../include/Form.hpp"
# include <cstdlib>
# include <ctime>

class	RobotomyRequestForm : public Form {
	private:
		std::string	_target;
	public:
		/*constructors*/
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		/*destructor*/
		~RobotomyRequestForm(void);
		/*operator overload*/
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
		/*getters*/
		std::string getTarget(void) const;
		/*Functions*/
		// void	robotomization(void);
		void action(void) const;
};

#endif