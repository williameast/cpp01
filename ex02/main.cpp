// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 14:27:59 by weast             #+#    #+#             //
//   Updated: 2025/08/19 14:28:27 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(void)
{
std::string var = "HI THIS IS BRAIN";

std::string *stringPTR = &var;
std::string &stringREF = var;

// print memory address of string variable
std::cout << "address of var:" << std::endl;
std::cout << &var << std::endl;

// print memory address of stringPTR
std::cout << "address held by stringPTR:" << std::endl;
std::cout << stringPTR << std::endl;

// print memory address of stringREF
std::cout << "address held by stringREF:" << std::endl;
std::cout << &stringREF << std::endl;


// print content of var
std::cout << "var content:" << std::endl;
std::cout << var << std::endl;

// print content of stringPTR
std::cout << "stringPTR content:" << std::endl;
std::cout << *stringPTR << std::endl;

// print content of stringREF
std::cout << "stringREF content:" << std::endl;
std::cout << stringREF << std::endl;
}
