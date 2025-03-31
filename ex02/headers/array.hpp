/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:28:53 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/31 18:57:35 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>

class Array
{
    public :
    
    Array() : array(NULL), size(0) {}
    Array(unsigned n) : size(n) 
    {
        array = new T array[size];
    }
    ~Array()
    {
        delete array[];
    }
    
    Array(const Array &other);
    Array& operator=(const Array &other); 
    size_t size() const;
    
    T* array;
    size_t size;
    
};



#endif