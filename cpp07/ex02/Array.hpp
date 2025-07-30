/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:18:49 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/30 22:28:36 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>

template<typename T>

class Array{
	private:
		T *_array;
		int _arr_size;
		
	public:
	//default constructer
	Array():_arr_size(0){
		std::cout << "Default Constructer Called\n";
		_array = new T[_arr_size];
	}

	//parametrized construcetr
	Array(int arr_size):_arr_size(arr_size){
		std::cout << "Parametrized Constructer Called\n";
		_array = new T[_arr_size];	
	}

	//copy constructer
	Array(const Array &other):_arr_size(other._arr_size){
		std::cout << "Copy Constructer Called\n";
		_array = new T[_arr_size];
		for (int i = 0; i < size(); i++)
			_array[i] = other._array[i];
		
	}

	~Array(){
		if (this->_array != NULL)
			delete []_array;
		std::cout << "Destructer Called\n";
	}


	T &operator=(const Array &other)
	{
		if (this->_array)
			delete []_array;
		if (_arr_size != 0)
		{
			this->_arr_size = other._arr_size;
			new T[_arr_size];
		}
		return *this;
		
	}
	
	T &operator[](int index){
		if (index >= this->size() || index < 0 || _array == NULL)
			throw OutOfIndex();
		return(_array[index]);
	}

	class OutOfIndex:public std::exception{
		const char *what() const throw(){
			return "error : index out of bounds!";
		}
	};

	//getter
	int size(){
		return _arr_size;
	}
	
};

// template <typename T>
// const char * T::OutOfIndex::what() const throw(){
// 	return "error : index out of bounds\n";
// }