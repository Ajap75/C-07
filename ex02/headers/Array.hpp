/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:28:53 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/03 11:46:29 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <stdexcept>
#include <iostream>



template <typename T>

class Array
{
    private :
    
    int _size;
    T* _data;
    
    public :
    
    Array() : _size(0), _data(NULL)  {}
    Array(unsigned n) : _size(n), _data(new T[_size]) 
    {
        int i;
        i = 0;
        while (i < size())
        {
            _data[i] = T();
            i++;
        }
    }
    ~Array()
    {
        delete[] _data;
    }
    
    Array(const Array &other) : _size(other._size)
    {
        int i;
        i = 0;
        _data = new T[size()];
        while (i < size())
        {
            _data[i] = other._data[i];
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
            _data = new T[other._size];
            while (i < size())
            {
                _data[i] = other._data[i];
                i++;
            }
        }
        return (*this);
    }
    // This one will be used to allowed the user to access the array without modifying the const value. 
    // Read-only, used in a function display for example
    T const & operator[](int index) const 
    {
        // std::cout << size() << std::endl;
        if (index >= size() || index < 0)
            throw std::out_of_range("Exception thrown : index is out of bound\n");
        return (_data[index]);
    }
    // This one will be used to acces the array and modify the value. 
    // Used to assigne value to the array for example
    T& operator[](int index)
    {
        // std::cout << size() << std::endl;
        if (index >= size() || index < 0)
            throw std::out_of_range("Exception thrown : index is out of bound\n");
        return (_data[index]);
    }
    int size() const
    {
        return (_size);
    }
    
};




#endif

