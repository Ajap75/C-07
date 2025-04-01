/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:34:27 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/01 13:22:43 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/array.hpp"
#include "../headers/template_function.hpp"
#include "../headers/Colors.hpp"
#include <string>
#include <iomanip>
#include <iostream>
// #pragma once


int main( void )
{
    try 
    {
    Array<int>intArray_default;
    Array<int>intArray(4);
    Array<char>charArray(4);
    Array<std::string>stringArray(4);
    Array<void *>ptrArray(4);
    Array<void *>charPtrArray(4);

    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';

    intArray._data[0] = 1;
    intArray._data[1] = 2;
    intArray._data[2] = 3;
    intArray._data[3] = 4;

    charArray._data[0] = 'J';
    charArray._data[1] = 'S';
    charArray._data[2] = 'U';
    charArray._data[3] = 'N';


    stringArray._data[0] = "Mercure";
    stringArray._data[1] = "Venus";
    stringArray._data[2] = "Terre";
    stringArray._data[3] = "Mars";

    ptrArray._data[0] = &intArray;
    ptrArray._data[1] = &charArray;
    ptrArray._data[2] = &stringArray;
    ptrArray._data[3] = &intArray_default;

    ptrArray._data[0] = &intArray;
    ptrArray._data[1] = &charArray;
    ptrArray._data[2] = &stringArray;
    ptrArray._data[3] = &intArray_default;

    charPtrArray._data[0] = &a;
    charPtrArray._data[1] = &b;
    charPtrArray._data[2] = &c;
    charPtrArray._data[3] = &d;
    
    std::cout << YELLOW << "---------TESTS 1)---------" << RESET << std::endl;
    std::cout << YELLOW << "-----Int array-----" << RESET << std::endl;
    print_array(&intArray);
    std::cout << YELLOW << "-----Int array (default constructor)-----" << RESET << std::endl;
    print_array(&intArray_default);
    std::cout << YELLOW << "-----char array-----" << RESET << std::endl;
    print_array(&charArray);
    std::cout << YELLOW << "-----string array-----" << RESET << std::endl;
    print_array(&stringArray);
    std::cout << YELLOW << "-----ptr array-----" << RESET << std::endl;
    print_array(&ptrArray);
    std::cout << YELLOW << "-----char ptr array-----" << RESET << std::endl;
    print_array(&charPtrArray);
    std::cout << YELLOW << "-----------------" << RESET << std::endl<< std::endl;

    
    Array<int>intArray_copy(intArray);
    Array<char>charArray_copy(charArray);
    Array<std::string>stringArray_copy(stringArray);
    Array<void *>ptrArray_copy(ptrArray);
    Array<void *>charPtrArray_copy(charPtrArray);
    
    std::cout << YELLOW << "---------TESTS 2) COPY_CONSTRUCTOR---------" << RESET << std::endl;
    std::cout << YELLOW << "-----Int array copy-----" << RESET << std::endl;
    print_array(&intArray_copy);
    std::cout << YELLOW << "-----char array copy-----" << RESET << std::endl;
    print_array(&charArray_copy);
    std::cout << YELLOW << "-----string array copy-----" << RESET << std::endl;
    print_array(&stringArray_copy);
    std::cout << YELLOW << "-----ptr array copy-----" << RESET << std::endl;
    print_array(&ptrArray_copy);
    std::cout << YELLOW << "-----char ptr array-----" << RESET << std::endl;
    print_array(&charPtrArray_copy);
    std::cout << YELLOW << "-----------------" << RESET << std::endl<< std::endl;

    std::cout << YELLOW << "---------TEST 3) DEEP_COPY---------" << RESET << std::endl;
    charPtrArray._data[0] = &a;
    charPtrArray._data[1] = &a;
    charPtrArray._data[2] = &a;
    charPtrArray._data[3] = &a;
    std::cout << YELLOW << "-----char ptr array-----" << RESET << std::endl;
    print_array(&charPtrArray);
    std::cout << YELLOW << "-----char ptr array copy-----" << RESET << std::endl;
    print_array(&charPtrArray_copy);
    
    
    charPtrArray._data[8] = &a;
    std::cout << YELLOW << "-----------------" << RESET << std::endl;
    }

    catch(std::exception &e)
    {
        std::cerr << "DDDDDDD" << std::endl;
        std::cerr << e.what();

    }
}

