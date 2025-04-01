/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:18:26 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/31 18:04:27 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ITER_HPP
#define  ITER_HPP

#include "stdlib.h"

template <typename T>
void iter(T* const array, size_t array_size, void (*function)(T const&))
{
    size_t i;
    i = 0;

    while (i < array_size)
    {
        function(array[i]);
        i++;
    }
};
#endif