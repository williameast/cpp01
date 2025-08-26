// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/26 14:43:59 by weast             #+#    #+#             //
//   Updated: 2025/08/26 15:46:13 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl logger;

	std::cout << "	expecting d, i, e and w message:" << std::endl;
	logger.complain("DEBUG");

	std::cout << "	expecting i, e and w message:" << std::endl;
	logger.complain("INFO");

	std::cout << "	expecting e and w message:" << std::endl;
	logger.complain("WARNING");

	std::cout << "	expecting error message:" << std::endl;
	logger.complain("ERROR");

	std::cout << "	expecting fallback error message:" << std::endl;
	logger.complain("HARL");
}
