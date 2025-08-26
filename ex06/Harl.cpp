// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/26 13:56:41 by weast             #+#    #+#             //
//   Updated: 2025/08/26 15:44:28 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"
#include <cstring>

Harl::Harl() {std::cout << "logger initialized." << std::endl;};

Harl::~Harl() {std::cout << "logger destroyed" << std::endl;};


void	Harl::debug (void)
{
	std::cerr
		<< ANSI_DEBUG
		<< "this is a debug message!"
		<< ANSI_RESET
		<< std::endl;
}

void	Harl::info (void)
{
	std::cerr
		<< ANSI_INFO
		<< "this is an info message!"
		<< ANSI_RESET
		<< std::endl;
}

void	Harl::warning (void)
{
	std::cerr
		<< ANSI_WARN
		<< "this is an warning message!"
		<< ANSI_RESET
		<< std::endl;
}

void	Harl::error (void)
{
	std::cerr
		<< ANSI_ERROR
		<< "this is an error message!"
		<< ANSI_RESET
		<< std::endl;
}

const Harl::FunctionMap Harl::funcs[4] =
{
	{0, "ERROR", &Harl::error},
	{1, "WARNING", &Harl::warning},
	{2, "INFO", &Harl::info},
	{3, "DEBUG", &Harl::debug},
};

int	Harl::get_log_level(std::string log_level)
{
        for (int i = 0; i < 4; i++)
          if (std::strcmp(log_level.c_str(), Harl::funcs[i].name) == 0)
		  {
            return Harl::funcs[i].level;
          }
		return -1;
}

// using fall
void Harl::complain(std::string log_level)
{
	int level = get_log_level(log_level);

	switch (level)
	{
		case 3:
			(this->*funcs[3].function)();
			if (!LOG_LEVELS_ENABLED)
				break;
		case 2:
			(this->*funcs[2].function)();
			if (!LOG_LEVELS_ENABLED)
				break;
		case 1:
			(this->*funcs[1].function)();
			if (!LOG_LEVELS_ENABLED)
				break;
		case 0:
			(this->*funcs[0].function)();
			break;
		default:
			std::cerr << "LOG LEVEL UNDEFINED" << std::endl;
			break;
	}
}
