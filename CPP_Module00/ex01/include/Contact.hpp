/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:09:14 by tmalheir          #+#    #+#             */
/*   Updated: 2024/11/19 10:58:27 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class	Contact {

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:
		Contact(void);
		~Contact(void);

		void	set_first_name(const std::string& first);
		void	set_last_name(const std::string& last);
		void	set_nickname(const std::string& nick);
		void	set_phone_number(const std::string& phone);
		void	set_darkest_secret(const std::string& secret);

		std::string	get_first_name(void)const;
		std::string	get_last_name(void)const;
		std::string	get_nickname(void)const;
		std::string	get_phone_number(void)const;
		std::string	get_darkest_secret(void)const;

};

#endif /* ****************************************************************** */