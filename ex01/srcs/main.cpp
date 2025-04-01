/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:34:27 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/31 18:15:26 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/iter.hpp"
#include "../headers/template_function.hpp"
#include "../headers/Colors.hpp"
#include <string>
#include <iomanip>
#include <iostream>
// #pragma once


int main( void )
{
    
    int aoi[3] = {1, 2, 3};
    char aoc[3] = {'a', 'b', 'c'};
    float aof[3] = {1.5f, 2.5f, 3.5f};
    double aod[3] = {1.5, 2.5, 3.5};
    std::string aos[] = {"Terrien", "Nakäns", "Köbalt", "Skuälls"};
    
    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;
    iter(aoi, 3, print);
    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;

    iter(aoc, 3, print);
    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;

    iter(aof, 3, print);
    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;

    iter(aod, 3, print);
    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;

    iter(aos, 4, print);
    return 0;
}