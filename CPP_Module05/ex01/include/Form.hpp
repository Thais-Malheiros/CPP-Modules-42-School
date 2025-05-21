/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:12:09 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/07 14:13:15 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class	Form {
	private:
		const std::string	_FormName;
		bool				_IsSigned;
		const int			_SignGrade;
		const int			_ExecGrade;
	public:
		/*constructors*/
		Form(void);
		Form(const std::string name, const int sign, const int exec);
		Form(const Form &other);
		/*destructor*/
		virtual ~Form(void);
		/*operator overload*/
		Form &operator=(const Form &other);
		/*getters*/
		std::string getName(void) const;
		bool getSigned(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		/*setters*/
		void setIsSigned(void);
		/*Functions*/
		void beSigned(Bureaucrat &bureaucrat);
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
	std::ostream& operator<<(std::ostream& os, const Form& form);

#endif