/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_function.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:50:33 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/03 11:46:58 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include "iostream"

#ifndef TEMPLATE_FUNCTION_HPP
#define TEMPLATE_FUNCTION_HPP

template <typename T>
void print(T const &n)
{
    std::cout << n << std::endl;
};

template <typename T>
void print_array(Array<T> const &array)
{
    int i;
    i = 0;

    while (i < array.size())
    {
        print(array[i]);
        i++;
    }
};

#endif