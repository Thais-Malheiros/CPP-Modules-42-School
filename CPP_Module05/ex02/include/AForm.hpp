/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:12:09 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/09 17:00:59 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class	AForm {
	private:
		const std::string	_FormName;
		bool				_IsSigned;
		const int			_SignGrade;
		const int			_ExecGrade;
	public:
		/*constructors*/
		AForm(void);
		AForm(const std::string name, const int sign, const int exec);
		AForm(const AForm &other);
		/*destructor*/
		virtual ~AForm(void);
		/*operator overload*/
		AForm &operator=(const AForm &other);
		/*getters*/
		virtual std::string getName(void) const;
		virtual bool getSigned(void) const;
		virtual int getSignGrade(void) const;
		virtual int getExecGrade(void) const;
		/*setters*/
		void setIsSigned(void);
		/*Functions*/
		void beSigned(Bureaucrat &bureaucrat);
		int execute(Bureaucrat const &executor) const;
		virtual void action(void) const = 0;
		/*exception classes*/
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};
	/*operator overload*/
	std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif