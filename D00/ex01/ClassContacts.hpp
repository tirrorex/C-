/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:50:23 by tnoah             #+#    #+#             */
/*   Updated: 2015/06/16 11:22:15 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACTS_HPP
# define CLASSCONTACTS_HPP
#include <string>

class Contacts {

	public:

		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_adress;
		std::string		email_adress;
		std::string		phone_number;
		std::string		birthday_data;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;

		Contacts( void );
		~Contacts( void );

};

#endif
