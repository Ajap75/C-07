/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:34:27 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/31 14:12:41 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/function_templates.hpp"
#include "../headers/Colors.hpp"
#include <string>
#include <iomanip>
#include <iostream>


int main( void ) {
    
    int a = 2;
    int b = 3;
    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;
    float e = 2.05f;
    float f = 3.56f;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    ::swap( e, f );
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;
    double g = 2.24f;
    double h = 1.788f;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    ::swap( g, h );
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

    std::cout << YELLOW << "-------TEST---------"<< RESET << std::endl;
    double i = 2.24f;
    double j = 2.24f;
    std::cout << "i = " << i << ", j = " << j << std::endl;
    ::swap( i, j );
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
    std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;
    
    return 0;
    }