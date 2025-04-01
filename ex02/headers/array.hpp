/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:28:53 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/01 10:47:04 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>

template <typename T>

class Array
{
    private :
    
    size_t _size;
    
    public :
    
    T* _data;
    Array() : _data(NULL), _size(0) {}
    Array(unsigned n) : _size(n) 
    {
        _data = new T[size()];
    }
    ~Array()
    {
        delete[] _data;
    }
    
    Array(const Array &other) : _size(other._size)
    {
        int i;
        i = 0;
        delete[] _data;
        _data = new T[size()];
        while (i < size())
        {
            _data[i] = other.data[i]
            i++;
        }
    }
    Array& operator=(const Array &other)
    {
        int i;
        i = 0;
        if (this != &other)
        {
            delete[] _data;
            _size = other._size;
            _data = new T[_other.size]
            while (i < size())
            {
                _data[i] = other.data[i]
                i++;
            }
        }
    }

    T& operator[](size_t index)
    {
        if (index >= size())
            throw (std::exception)
        return (_data[index])
    }
    size_t size() const
    {
        return (_size);
    }
    
};



#endif