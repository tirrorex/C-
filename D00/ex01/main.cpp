/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:48:02 by tnoah             #+#    #+#             */
/*   Updated: 2015/06/16 11:07:45 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClassContacts.hpp"

int		main(void)
{
	std::string		buff;
	Contacts		instance[8];
	int				i = 0;
	int				j = 0;
	int				index = 0;
	int				prompt = 0;
	int				len = 0;
	int				num = 0;

	std::cout << "Please enter your command (ADD / SEARCH / EXIT): ";
	std::cin >> buff;
	while (buff[i])
	{
		if (buff[i] >= 'a' && buff[i] <= 'z')
			buff[i] -= 32;
		i++;
	}
	while (buff.compare("EXIT") != 0)
	{
		if (buff.compare("ADD") == 0)
		{
			if (j == 8)
				std::cout << "Too many contacts stored." << std::endl;
			else
			{
				std::cout << "First name ";
				std::cin >> instance[j].first_name;
				std::cout << "Last name ";
				std::cin >> instance[j].last_name;
				std::cout << "Nickname ";
				std::cin >> instance[j].nickname;
				std::cout << "Login ";
				std::cin >> instance[j].login;
				std::cout << "Postal adress ";
				std::cin >> instance[j].postal_adress;
				std::cout << "Email adress ";
				std::cin >> instance[j].email_adress;
				std::cout << "Phone number ";
				std::cin >> instance[j].phone_number;
				std::cout << "Birthday date ";
				std::cin >> instance[j].birthday_data;
				std::cout << "Favorite meal ";
				std::cin >> instance[j].favorite_meal;
				std::cout << "Underwear color ";
				std::cin >> instance[j].underwear_color;
				std::cout << "Darkest secret ";
				std::cin >> instance[j].darkest_secret;
				j++;
			}
		}
		else if (buff.compare("SEARCH") == 0)
		{
			index = 0;
			while (index < j)
			{
				std::cout << "|     index|first name| last name|  nickname|" << std::endl;
				if (!instance[index].first_name.empty() && !instance[index].last_name.empty() && \
					!instance[index].nickname.empty())
				{
					std::cout << "|         " << index << "|";
					len = instance[index].first_name.length();
					if (len < 10)
					{
						while (len < 10)
						{
							std::cout << " ";
							len++;
						}
						std::cout << instance[index].first_name << "|";
					}
					else
					{
						while (num < 9)
						{
							std::cout << instance[index].first_name[num];
							num++;
						}
						std::cout << ".|";
					}
					len = instance[index].last_name.length();
					num = 0;
					if (len < 10)
					{
						while (len < 10)
						{
							std::cout << " ";
							len++;
						}
						std::cout << instance[index].last_name << "|";
					}
					else
					{
						while (num < 9)
						{
							std::cout << instance[index].last_name[num];
							num++;
						}
						std::cout << ".|";
					}
					len = instance[index].nickname.length();
					num = 0;
					if (len < 10)
					{
						while (len < 10)
						{
							std::cout << " ";
							len++;
						}
						std::cout << instance[index].nickname << "|";
					}
					else
					{
						while (num < 9)
						{
							std::cout << instance[index].nickname[num];
							num++;
						}
						std::cout << ".|";
					}

				}
				std::cout << std::endl;
				index++;
			}
			std::cout << "Please enter an index number: " << std::endl;
			std::cin >> prompt;
			if (prompt < j)
			{
				std::cout << "First name ";
				std::cout << instance[prompt].first_name << std::endl;
				std::cout << "Last name ";
				std::cout << instance[prompt].last_name << std::endl;
				std::cout << "Nickname ";
				std::cout << instance[prompt].nickname << std::endl;
				std::cout << "Login ";
				std::cout << instance[prompt].login << std::endl;
				std::cout << "Postal adress ";
				std::cout << instance[prompt].postal_adress << std::endl;
				std::cout << "Email adress ";
				std::cout << instance[prompt].email_adress << std::endl;
				std::cout << "Phone number ";
				std::cout << instance[prompt].phone_number << std::endl;
				std::cout << "Birthday date ";
				std::cout << instance[prompt].birthday_data << std::endl;
				std::cout << "Favorite meal ";
				std::cout << instance[prompt].favorite_meal << std::endl;
				std::cout << "Underwear color ";
				std::cout << instance[prompt].underwear_color << std::endl;
				std::cout << "Darkest secret ";
				std::cout << instance[prompt].darkest_secret << std::endl;
			}
			else
		 		std::cout << "Wrong number, please enter a valid index number." << std::endl;

		}
		else
			std::cout << "Invalid input, expected commands : ADD, SEARCH, EXIT." << std::endl;
		std::cout << "Please enter your command: ";
		std::cin >> buff;
		i = 0;
		while (buff[i])
		{
			if (buff[i] >= 'a' && buff[i] <= 'z')
				buff[i] -= 32;
			i++;
		}
	}
	return (0);
}
