/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:50:15 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/11 10:58:57 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define BLUE    "\033[34m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"

class	PhoneBook {

	private:
		Contact	contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		choose_option(std::string& option);
		void		add_contact(void);
		void		search_contact(void);
		bool		is_valid(std::string input);
		void		display_all(void);
		void		display_contact(int idx);
		void		exit_program(void);
		std::string	format(const std::string& field);
};

#endif /* ****************************************************************** */