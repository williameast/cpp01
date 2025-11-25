// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/26 13:52:16 by weast             #+#    #+#             //
//   Updated: 2025/11/25 16:04:48 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HARL_H
#define HARL_H

#include <iostream>

#define ANSI_DEBUG "\033[36m"
#define ANSI_INFO  "\033[32m"
#define ANSI_WARN  "\033[33m"
#define ANSI_ERROR "\033[31m"
#define ANSI_RESET "\033[0m"

#define LOG_LEVELS_ENABLED 0
class Harl
{

	private:
	void debug (void);
	void info (void);
	void warning (void);
	void error (void);

	// need to grok this function pointer.
	typedef void (Harl::*LogFunction)(void);

	// a map, where each function is given a name.
	// we use that to call a function!
	struct FunctionMap{
		int level;
		const char *name;
		LogFunction function;
	};

	// create one map for each harl function
	static const FunctionMap funcs[4];

	public:

	Harl();
	~Harl();

	// helper
	int	get_log_level(std::string log_level);
	// main function
	void	complain(std::string log_level);

};


#endif // HARL_H
