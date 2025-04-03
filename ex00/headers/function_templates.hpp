/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_templates.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:34:25 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/03 12:26:18 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_TEMPLATES_HPP
#define  FUNCTION_TEMPLATES_HPP


template <typename T>
void swap (T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min (T a, T b)
{
    if (a > b)
        return b;
    else if (b > a)
        return a;
    else 
        return b;
}

template <typename T>
T max (T a, T b)
{
    if (a > b)
        return a;
    if (b > a)
        return b;
    else
        return b;
}

#endif