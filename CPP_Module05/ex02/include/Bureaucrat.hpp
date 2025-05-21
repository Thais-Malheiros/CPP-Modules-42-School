/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:24:37 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/09 13:27:18 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class AForm;

class	Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		/*constructors*/
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		/*destructor*/
		~Bureaucrat(void);
		/*operator overload*/
		Bureaucrat& operator=(const Bureaucrat &other);
		/*getters*/
		std::string getName(void) const;
		int getGrade(void) const;
		/*setters*/
		void setGrade(int grade);
		/*Functions*/
		void	incrementGrade(const int inc);
		void	decrementGrade(const int dec);
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);
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
	std::ostream& operator<<(std::ostream& os, const Bureaucrat& person);

#endif