/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:34:27 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/03 12:18:40 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/Array.hpp"
#include "../headers/template_function.hpp"
#include "../headers/Colors.hpp"
#include <string>
#include <iomanip>
#include <iostream>
// #pragma once


int main( void )
{

    Array<int>intArray_default;
    Array<int>intArray(4);
    Array<char>charArray(4);
    Array<std::string>stringArray(4);
    Array<void *>ptrArray(4);
    Array<void *>charPtrArray(4);

    std::cout << YELLOW << "---------TESTS 0)---------" << RESET << std::endl;
    std::cout << YELLOW << "-----Int array-----" << RESET << std::endl;
    print_array(intArray);
    std::cout << YELLOW << "-----Int array (default constructor)-----" << RESET << std::endl;
    print_array(intArray_default);
    std::cout << YELLOW << "-----char array-----" << RESET << std::endl;
    print_array(charArray);
    std::cout << YELLOW << "-----string array-----" << RESET << std::endl;
    print_array(stringArray);
    std::cout << YELLOW << "-----ptr array-----" << RESET << std::endl;
    print_array(ptrArray);
    std::cout << YELLOW << "-----char ptr array-----" << RESET << std::endl;
    print_array(charPtrArray);
    std::cout << YELLOW << "-----------------" << RESET << std::endl<< std::endl;

    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'f';
    char g = 'g';
    char h = 'h';
    
    void *ptr;

    intArray[0] = 1;
    intArray[1] = 2;
    intArray[2] = 3;
    intArray[3] = 4;

    charArray[0] = 'J';
    charArray[1] = 'S';
    charArray[2] = 'U';
    charArray[3] = 'N';


    stringArray[0] = "Mercure";
    stringArray[1] = "Venus";
    stringArray[2] = "Terre";
    stringArray[3] = "Mars";

    ptrArray[0] = &intArray;
    ptrArray[1] = &charArray;
    ptrArray[2] = &stringArray;
    ptrArray[3] = &intArray_default;

    charPtrArray[0] = &a;
    charPtrArray[1] = &b;
    charPtrArray[2] = &c;
    charPtrArray[3] = &d;
    
    std::cout << YELLOW << "---------TESTS 1)---------" << RESET << std::endl;
    std::cout << YELLOW << "-----Int array-----" << RESET << std::endl;
    print_array(intArray);
    std::cout << YELLOW << "-----Int array (default constructor)-----" << RESET << std::endl;
    print_array(intArray_default);
    std::cout << YELLOW << "-----char array-----" << RESET << std::endl;
    print_array(charArray);
    std::cout << YELLOW << "-----string array-----" << RESET << std::endl;
    print_array(stringArray);
    std::cout << YELLOW << "-----ptr array-----" << RESET << std::endl;
    print_array(ptrArray);
    std::cout << YELLOW << "-----char ptr array-----" << RESET << std::endl;
    print_array(charPtrArray);
    std::cout << YELLOW << "-----------------" << RESET << std::endl<< std::endl;

    
    Array<int>intArray_copy(intArray);
    Array<char>charArray_copy(charArray);
    Array<std::string>stringArray_copy(stringArray);
    Array<void *>ptrArray_copy(ptrArray);
    Array<void *>charPtrArray_copy(charPtrArray);
    
    std::cout << YELLOW << "---------TESTS 2) COPY_CONSTRUCTOR---------" << RESET << std::endl;
    std::cout << YELLOW << "-----Int array copy-----" << RESET << std::endl;
    print_array(intArray_copy);
    std::cout << YELLOW << "-----char array copy-----" << RESET << std::endl;
    print_array(charArray_copy);
    std::cout << YELLOW << "-----string array copy-----" << RESET << std::endl;
    print_array(stringArray_copy);
    std::cout << YELLOW << "-----ptr array copy-----" << RESET << std::endl;
    print_array(ptrArray_copy);
    std::cout << YELLOW << "-----char ptr array-----" << RESET << std::endl;
    print_array(charPtrArray_copy);
    std::cout << YELLOW << "-----------------" << RESET << std::endl<< std::endl;

    std::cout << YELLOW << "---------TEST 3) DEEP_COPY---------" << RESET << std::endl;
    charPtrArray[0] = &a;
    charPtrArray[1] = &a;
    charPtrArray[2] = &a;
    charPtrArray[3] = &a;
    std::cout << YELLOW << "-----char ptr array-----" << RESET << std::endl;
    print_array(charPtrArray);
    std::cout << YELLOW << "-----char ptr array copy-----" << RESET << std::endl;
    print_array(charPtrArray_copy);
    
    std::cout << YELLOW << "---------TEST 4) EXCEPTION---------" << RESET << std::endl;
    try {
        ptr = charPtrArray_copy[9];
        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what();
    }
    std::cout << YELLOW << "-----------------" << RESET << std::endl;
 
    Array<int>intArray_assigned(intArray);
    Array<char>charArray_assigned(charArray);
    Array<std::string>stringArray_assigned(stringArray);
    Array<void *>ptrArray_assigned(ptrArray);
    Array<void *>charPtrArray_assigned(charPtrArray);
    
    intArray_assigned[0] = 5;
    intArray_assigned[1] = 6;
    intArray_assigned[2] = 7;
    intArray_assigned[3] = 8;

    charArray_assigned[0] = 'M';
    charArray_assigned[1] = 'V';
    charArray_assigned[2] = 'T';
    charArray_assigned[3] = 'M';

    
    stringArray_assigned[0] = "Jupiter";
    stringArray_assigned[1] = "Saturne";
    stringArray_assigned[2] = "Uranus";
    stringArray_assigned[3] = "Neptune";

    ptrArray_assigned[0] = &intArray_default;
    ptrArray_assigned[1] = &stringArray;
    ptrArray_assigned[2] = &charArray;
    ptrArray_assigned[3] = &intArray;

    charPtrArray_assigned[0] = &e;
    charPtrArray_assigned[1] = &f;
    charPtrArray_assigned[2] = &g;
    charPtrArray_assigned[3] = &h;

    
    std::cout << YELLOW << "---------TEST 5) ASSIGNATION---------" << RESET << std::endl;
    std::cout << YELLOW << "-----Int array before assignation -----" << RESET << std::endl;
    print_array(intArray_assigned);
    intArray_assigned = intArray;
    std::cout << YELLOW << "-----char array before assignation-----" << RESET << std::endl;
    print_array(charArray_assigned);
    charArray_assigned = charArray;
    std::cout << YELLOW << "-----string array before assignation-----" << RESET << std::endl;
    print_array(stringArray_assigned);
    stringArray_assigned = stringArray;
    std::cout << YELLOW << "-----ptr array before assignation-----" << RESET << std::endl;
    print_array(ptrArray_assigned);
    ptrArray_assigned = ptrArray;
    std::cout << YELLOW << "-----char ptr array before assignation-----" << RESET << std::endl;
    print_array(charPtrArray_assigned);
    charPtrArray_assigned = charPtrArray;

    std::cout << YELLOW << "-----Source Array are set to 0. /0, NULL-----" << RESET << std::endl;

    intArray[0] = 0;
    intArray[1] = 0;
    intArray[2] = 0;
    intArray[3] = 0;

    charArray[0] = 'r';
    charArray[1] = 'r';
    charArray[2] = 'r';
    charArray[3] = 'r';


    stringArray[0] = "";
    stringArray[1] = "";
    stringArray[2] = "";
    stringArray[3] = "";

    ptrArray[0] = NULL;
    ptrArray[1] = NULL;
    ptrArray[2] = NULL;
    ptrArray[3] = NULL;

    charPtrArray[0] = NULL;;
    charPtrArray[1] = NULL;;
    charPtrArray[2] = NULL;;
    charPtrArray[3] = NULL;;

    std::cout << YELLOW << "-----Int array after assignation -----" << RESET << std::endl;
    print_array(intArray_assigned);
    std::cout << YELLOW << "-----char array after assignation-----" << RESET << std::endl;
    print_array(charArray_assigned);
    std::cout << YELLOW << "-----string array after assignation-----" << RESET << std::endl;
    print_array(stringArray_assigned);
    std::cout << YELLOW << "-----ptr array after assignation-----" << RESET << std::endl;
    print_array(ptrArray_assigned);
    std::cout << YELLOW << "-----char ptr array after assignation-----" << RESET << std::endl;
    print_array(charPtrArray_assigned);
    std::cout << YELLOW << "-----------------" << RESET << std::endl<< std::endl;
    std::cout << YELLOW << "-----------------" << RESET << std::endl;
    


    std::cout << YELLOW << "---------TEST 6) ACCESSIBILITY---------" << RESET << std::endl;
    
    const Array <int>intArray_const(4);
    //READING ONLY, so this line will compile. 
    std::cout << intArray_const[0] << std::endl;
    // This line can't compile because the [] operator cont version will be call on a const obect. 
    // It returns a const object, and a const object is not a modifiable left value
    // intArray_const[0] = 5;
    Array <int>intArray2(4);
    // On the other hand, if the object is non const, it's the non const versuon of the operator [] that will be called 
    // And it returns a non-const object T, an int here, that can be modified.  
    intArray2[0] = 7;
    std::cout << intArray_const[0] << std::endl;

    std::cout << YELLOW << "-----------------" << RESET << std::endl<< std::endl;
    std::cout << YELLOW << "-----------------" << RESET << std::endl;
    
    }

